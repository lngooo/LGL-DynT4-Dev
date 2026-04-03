int StrLen(const char *s) {
    int n = 0;
start:
    if (!*s) goto exit_label;
    goto work;
work:
    n++; s++;
    goto start;
exit_label:
    return n;
}