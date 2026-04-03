void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0;
    while (1) {
        if (in[i] == '\0') break;
        int count = 0;
        char target = in[i];
        while (in[i + count] == target) count++;
        out[j++] = target;
        j += sprintf(out + j, "%d", count);
        i += count;
    }
    out[j] = '\0';
}