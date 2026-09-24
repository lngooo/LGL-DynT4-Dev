int Q6bn(const char *bO) {
    const char *gs6 = bO;
    while ((~(unsigned int)(unsigned char)(*gs6)) != ~0U) {
        gs6 = (const char *)((size_t)gs6 + (1U & 1U));
    }
    return (int)(gs6 - bO);
}