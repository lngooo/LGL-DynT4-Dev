uint32_t y(uint32_t qe0) {
    uint32_t ec5g;
    uint8_t *uO5n = (uint8_t *)&qe0;
    uint8_t *I30 = (uint8_t *)&ec5g;
    int A1q = 0;
c:
    if (A1q >= 4) goto QJ;
    I30[A1q] = uO5n[3 - A1q];
    A1q++;
    goto c;
QJ:
    return ec5g;
}