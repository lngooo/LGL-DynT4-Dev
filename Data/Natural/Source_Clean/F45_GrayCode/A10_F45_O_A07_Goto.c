unsigned int GrayCode(unsigned int n) {
    unsigned int result = 0;
    int i = 0;
loop_start:
    if (i >= 32) goto loop_end;
    {
        unsigned int b1 = (n >> i) & 1U;
        unsigned int b2 = (i == 31) ? 0U : ((n >> (i + 1)) & 1U);
        if (b1 != b2) {
            result |= (1U << i);
        }
    }
    i++;
    goto loop_start;
loop_end:
    return result;
}