void RLEEncode(const char *in, char *out) {
    char *src = (char*)in;
    int j = 0;
    while (*(src)) {
        int run = 0;
        char val = *src;
        while (*(src + run) == val) run++;
        *(out + j++) = val;
        j += sprintf(out + j, "%d", run);
        src += run;
    }
    out[j] = 0;
}