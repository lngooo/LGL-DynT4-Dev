int Sum(int n) {
    int total = 0, i = 1;
loop_start:
    if (i > n) goto loop_end;
    total += i;
    i++;
    goto loop_start;
loop_end:
    return total;
}