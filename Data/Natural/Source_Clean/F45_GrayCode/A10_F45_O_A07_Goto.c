unsigned int GrayCode(unsigned int n) {
    unsigned int result = 0;
    int i = 0;
loop_start:
    if (i >= 32) goto loop_end;
    if (((n >> i) & 1) != ((n >> (i+1)) & 1)) result |= (1U << i);
    i++;
    goto loop_start;
loop_end:
    return result;
}