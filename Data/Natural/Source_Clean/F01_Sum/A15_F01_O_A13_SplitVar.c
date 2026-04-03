int Sum(int n) {
    int acc1 = 0, acc2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) acc1 += i;
        else acc2 += i;
    }
    return acc1 + acc2;
}