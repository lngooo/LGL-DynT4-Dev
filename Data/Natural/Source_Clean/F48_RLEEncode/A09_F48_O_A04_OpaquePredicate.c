void RLEEncode(const char *in, char *out) {
    int n = strlen(in), p = 0;
    if ((n * n + 1) > 0) {
        for (int i = 0; i < n; ) {
            int c = 1;
            while (i + c < n && in[i] == in[i+c]) c++;
            p += sprintf(out + p, "%c%d", in[i], c);
            i += c;
        }
    }
}