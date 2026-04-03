void TrimSpace(char* s) {
    char res[4096] = {0};
    char *p = s;
    char *delims = " \t\n\r\v\f";
    while (*p) {
        int len = strcspn(p, delims);
        if (len > 0) {
            strncat(res, p, len);
            p += len;
        } else {
            p++;
        }
    }
    strcpy(s, res);
}