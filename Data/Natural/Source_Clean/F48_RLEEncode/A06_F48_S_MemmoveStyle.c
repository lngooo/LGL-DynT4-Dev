void RLEEncode(const char *in, char *out) {
    char temp[256]; strcpy(temp, in);
    int offset = 0, out_p = 0;
    while (temp[offset]) {
        int c = 1;
        char target = temp[offset];
        while (temp[offset + c] == target) c++;
        out[out_p++] = target;
        out_p += sprintf(out + out_p, "%d", c);
        offset += c;
    }
    out[out_p] = '\0';
}