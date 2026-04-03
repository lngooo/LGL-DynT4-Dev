int WordCount(char* s) {
    long long cnt = 0;
    int st = 0;
    for (; *s; s++) {
        if (isspace(*s)) st = 0;
        else if (st == 0) { st = 1; cnt += 1LL; }
    }
    return (int)cnt;
}