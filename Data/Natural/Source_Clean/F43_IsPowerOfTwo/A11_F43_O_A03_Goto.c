int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int count = 0;
loop_head:
    if (n <= 0) goto loop_exit;
    if (n & 1) count++;
    n >>= 1;
    goto loop_head;
loop_exit:
    return (count == 1);
}