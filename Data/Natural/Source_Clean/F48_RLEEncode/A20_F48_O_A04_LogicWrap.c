void RLEEncode(const char *in, char *out) {
    int i = 0, n = strlen(in);
    char buf[256] = {0};
    for (; i < n; ) {
        int c = 1;
        for (int k = i + 1; k < n; k++) {
            if (in[k] == in[i]) c++;
            else break;
        }
        int cur = strlen(buf);
        buf[cur] = in[i];
        sprintf(buf + cur + 1, "%d", c);
        i += c;
    }
    strcpy(out, buf);
}