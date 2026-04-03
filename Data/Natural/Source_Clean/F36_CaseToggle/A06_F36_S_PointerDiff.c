void CaseToggle(char* s) {
    char *p = s;
    while (*p) {
        char c = *p;
        if (c >= 65 && c <= 90) *p = c + (97 - 65);
        else if (c >= 97 && c <= 122) *p = c - (97 - 65);
        p++;
    }
}