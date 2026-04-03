struct Checker { int val; int result; };

int IsPrime(int n) {
    struct Checker c = {n, 1};
    if (c.val < 2) return 0;
    for (int i = 2; i * i <= c.val; i++) {
        if (c.val % i == 0) { c.result = 0; break; }
    }
    return c.result;
}