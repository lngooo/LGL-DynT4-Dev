struct Bytes {
    uint32_t b0 : 8;
    uint32_t b1 : 8;
    uint32_t b2 : 8;
    uint32_t b3 : 8;
};

uint32_t ByteSwap(uint32_t x) {
    struct Bytes *src = (struct Bytes *)&x;
    uint32_t res;
    struct Bytes *dst = (struct Bytes *)&res;
    dst->b0 = src->b3;
    dst->b1 = src->b2;
    dst->b2 = src->b1;
    dst->b3 = src->b0;
    return res;
}