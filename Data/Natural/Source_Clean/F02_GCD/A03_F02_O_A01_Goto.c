int GCD(int a, int b) {
    a = abs(a); b = abs(b);
loop:
    if (b == 0) goto end;
    int t = b;
    b = a % b;
    a = t;
    goto loop;
end:
    return a;
}