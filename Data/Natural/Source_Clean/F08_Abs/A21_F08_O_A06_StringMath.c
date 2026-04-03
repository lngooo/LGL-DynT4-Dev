int Abs(int n) {
    char buf[32];
    sprintf(buf, "%d", n);
    if (buf[0] == '-') {
        return atoi(buf + 1);
    }
    return n;
}