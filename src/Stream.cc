// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Stream.h"

class ZkReadExtImpl final : public zenkit::Read {
public:
	ZkReadExtImpl(ZkReadExt ext, void* ctx) : _m_ctx(ctx), _m_ext(ext) {}
	ZkReadExtImpl(ZkReadExtImpl const&) = delete;
	ZkReadExtImpl(ZkReadExtImpl&&) = delete;

	~ZkReadExtImpl() noexcept override {
		if (_m_ctx && _m_ext.del) {
			_m_ext.del(_m_ctx);
		}

		_m_ctx = nullptr;
	}

	size_t read(void* buf, size_t len) noexcept override {
		return _m_ext.read(_m_ctx, buf, len);
	}

	void seek(int64_t off, zenkit::Whence whence) noexcept override {
		_m_ext.seek(_m_ctx, off, static_cast<ZkWhence>(whence));
	}

	[[nodiscard]] size_t tell() const noexcept override {
		return _m_ext.tell(_m_ctx);
	}

	[[nodiscard]] bool eof() const noexcept override {
		return _m_ext.eof(_m_ctx);
	}

private:
	void* _m_ctx;
	ZkReadExt _m_ext;
};

ZkRead* ZkRead_newFile(FILE* stream) {
	return zenkit::Read::from(stream).release();
}

ZkRead* ZkRead_newMem(ZkByte const* bytes, ZkSize length) {
	return zenkit::Read::from(reinterpret_cast<std::byte const*>(bytes), length).release();
}

ZkRead* ZkRead_newPath(ZkString path) {
	return zenkit::Read::from(path).release();
}

ZkRead* ZkRead_newExt(ZkReadExt ext, void* ctx) {
	return new ZkReadExtImpl {ext, ctx};
}

void ZkRead_del(ZkRead* slf) {
	delete slf;
}

ZkSize ZkRead_getSize(ZkRead* slf) {
	auto off = slf->tell();
	slf->seek(0, zenkit::Whence::END);
	auto size = slf->tell();
	slf->seek(static_cast<int64_t>(off), zenkit::Whence::BEG);
	return size;
}

ZkSize ZkRead_getBytes(ZkRead* slf, void* buf, ZkSize length) {
	auto off = slf->tell();
	slf->seek(0, zenkit::Whence::END);
	auto count = slf->read(buf, length);
	slf->seek(static_cast<int64_t>(off), zenkit::Whence::BEG);
	return count;
}
