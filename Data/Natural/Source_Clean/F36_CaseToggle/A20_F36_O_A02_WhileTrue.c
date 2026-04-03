void CaseToggle(char* s) {
    while (1) {
        if (!*s) break;
        unsigned char c = (unsigned char)*s;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            *s = (char)(c ^ 0x20);
        }
        s++;
    }
}