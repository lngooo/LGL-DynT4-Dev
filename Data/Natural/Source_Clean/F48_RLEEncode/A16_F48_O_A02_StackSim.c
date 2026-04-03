void RLEEncode(const char *in, char *out) {
    if (!*in) return;
    int n = 0;
    while (in[n] == in[0]) n++;
    int cur = strlen(out);
    out[cur] = in[0];
    sprintf(out + cur + 1, "%d", n);
    RLEEncode(in + n, out);
}