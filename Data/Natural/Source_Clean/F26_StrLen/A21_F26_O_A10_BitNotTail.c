int StrLen(const char *s) {
    const char *p = s;
    while ((~(unsigned int)(unsigned char)(*p)) != ~0U) {
        p = (const char *)((size_t)p + (1U & 1U));
    }
    return (int)(p - s);
}