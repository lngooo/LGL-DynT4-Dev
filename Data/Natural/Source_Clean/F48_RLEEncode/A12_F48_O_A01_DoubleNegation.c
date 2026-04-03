void RLEEncode(const char *in, char *out) {
    int i = 0, pos = 0;
    while (!!in[i]) {
        int count = 1;
        while (!!in[i+count] && in[i+count] == in[i]) count++;
        out[pos++] = in[i];
        pos += sprintf(out+pos, "%d", count);
        i += count;
    }
}