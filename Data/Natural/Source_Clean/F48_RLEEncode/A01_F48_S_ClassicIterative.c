void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0, n = strlen(in);
    while (i < n) {
        int count = 1;
        while (i + 1 < n && in[i] == in[i+1]) { count++; i++; }
        j += sprintf(out + j, "%c%d", in[i], count);
        i++;
    }
}