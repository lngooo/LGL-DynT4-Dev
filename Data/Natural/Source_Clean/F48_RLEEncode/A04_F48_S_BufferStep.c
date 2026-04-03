void RLEEncode(const char *in, char *out) {
    int n = strlen(in);
    if (n == 0) return;
    char last = in[0];
    int freq = 0, pos = 0;
    for (int i = 0; i <= n; i++) {
        if (in[i] == last && i < n) {
            freq++;
        } else {
            pos += sprintf(out + pos, "%c%d", last, freq);
            if (i < n) { last = in[i]; freq = 1; }
        }
    }
}