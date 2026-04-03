uint32_t ByteSwap(uint32_t x) {
    union {
        uint32_t val;
        uint8_t bytes[4];
    } src, dst;
    src.val = x;
    dst.bytes[0] = src.bytes[3];
    dst.bytes[1] = src.bytes[2];
    dst.bytes[2] = src.bytes[1];
    dst.bytes[3] = src.bytes[0];
    return dst.val;
}