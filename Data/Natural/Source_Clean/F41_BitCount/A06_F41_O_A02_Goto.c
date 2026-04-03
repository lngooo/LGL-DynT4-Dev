int BitCount(uint32_t n) {
    int count = 0;
check_n:
    if (n == 0) goto exit_f;
    n &= (n - 1);
    count++;
    goto check_n;
exit_f:
    return count;
}