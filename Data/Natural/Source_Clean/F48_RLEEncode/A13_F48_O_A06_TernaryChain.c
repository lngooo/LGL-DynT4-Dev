void RLEEncode(const char *in, char *out) {
    int idx = 0, o_idx = 0;
    while (in[idx]) {
        int c = 1;
        while (in[idx + c] ? (in[idx+c] == in[idx]) : 0) c++;
        out[o_idx++] = in[idx];
        o_idx += sprintf(out + o_idx, "%d", c);
        idx += c;
    }
}