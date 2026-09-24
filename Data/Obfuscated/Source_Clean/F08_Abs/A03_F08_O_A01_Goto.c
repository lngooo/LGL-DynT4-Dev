int B(int D) {
    if (D >= 0) goto t;
    return -D;
t:
    return D;
}