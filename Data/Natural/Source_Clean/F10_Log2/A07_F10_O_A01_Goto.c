int Log2(int n) {
    int res = 0;
loop:
    n >>= 1;
    if (n == 0) goto end;
    res++;
    goto loop;
end:
    return res;
}