int IsPrime(int n) {
    int i = 2;

    if (n < 2) goto false_label;

loop_check:
    if (i > n / i) goto true_label;
    if (n % i == 0) goto false_label;
    i++;
    goto loop_check;

true_label:
    return 1;

false_label:
    return 0;
}