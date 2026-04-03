void CaseToggle(char* s) {
    int x1 = 16, x2 = 16;
    while (*s) {
        char c = *s;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            *s = c ^ (x1 + x2);
        }
        s++;
    }
}