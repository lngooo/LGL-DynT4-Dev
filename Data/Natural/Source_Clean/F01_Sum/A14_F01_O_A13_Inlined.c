int Sum(int n) {
    int acc = 0;
start:
    if (n <= 0) return acc;
    acc += n;
    n--;
    goto start;
}