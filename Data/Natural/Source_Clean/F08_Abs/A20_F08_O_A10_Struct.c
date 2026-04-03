struct Data { int val; int sign; };

int Abs(int n) {
    struct Data d;
    d.val = n;
    d.sign = (n < 0);
    if (d.sign) return -d.val;
    return d.val;
}