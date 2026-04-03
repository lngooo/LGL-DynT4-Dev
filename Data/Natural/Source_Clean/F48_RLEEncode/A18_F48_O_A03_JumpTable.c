void RLEEncode(const char *in, char *out) {
    char *ptr = (char*)in;
    int written = 0;
loop_rle:
    if (!*ptr) return;
    char c = *ptr;
    int cnt = 1;
    while (*(ptr + cnt) == c) cnt++;
    out[written++] = c;
    written += sprintf(out + written, "%d", cnt);
    ptr += cnt;
    goto loop_rle;
}