uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *s = (uint8_t *)&x;
    uint8_t *d = (uint8_t *)&res;
    int i = 0;
loop_head:
    if (i >= 4) goto loop_exit;
    d[i] = s[3 - i];
    i++;
    goto loop_head;
loop_exit:
    return res;
}