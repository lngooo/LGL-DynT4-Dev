void RLEEncode(const char *in, char *out) {
    if (*in == '\0') return;
    int count = 1;
    while (in[count] != '\0' && in[count] == in[0]) count++;
    char buf[16];
    sprintf(buf, "%c%d", in[0], count);
    strcat(out, buf);
    RLEEncode(in + count, out);
}