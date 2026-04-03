void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0;
    while (in[i] != 0) {
        int count = 1;
        while (in[i + count] != 0 && !(in[i+count] ^ in[i])) count++;
        out[j++] = in[i];
        j += sprintf(out + j, "%d", count);
        i += count;
    }
}