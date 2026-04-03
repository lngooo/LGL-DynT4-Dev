void RLEEncode(const char *in, char *out) {
    int i = -1, j = 0;
    while (in[++i]) {
        int c = 1;
        while (in[i + c] == in[i]) c++;
        out[j++] = in[i];
        j += sprintf(out + j, "%d", c);
        i += (c - 1);
    }
}