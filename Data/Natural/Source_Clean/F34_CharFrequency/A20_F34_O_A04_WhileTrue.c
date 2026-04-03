int CharFrequency(char* s, char c) {
    int res = 0;
    char* cur = s;
    while (1) {
        cur = strchr(cur, c);
        if (cur == NULL) break;
        res++;
        cur++;
    }
    return res;
}