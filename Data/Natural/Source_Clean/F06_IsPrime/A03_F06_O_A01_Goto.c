int IsPrime(int n) {
    if (n < 2) goto false_label;
    if (n < 4) goto true_label;
    if (n % 2 == 0) goto false_label;
    int i = 3;
loop:
    if (i * i > n) goto true_label;
    if (n % i == 0) goto false_label;
    i += 2;
    goto loop;
true_label: return 1;
false_label: return 0;
}