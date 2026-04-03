void RLEEncode(const char *in, char *out) {
    char *p = (char*)in, *q = out;
    while (*p) {
        char *start = p;
        while (*(p + 1) && *(p + 1) == *p) p++;
        int len = (int)(p - start + 1);
        *q++ = *start;
        q += sprintf(q, "%d", len);
        p++;
    }
    *q = '\0';
}