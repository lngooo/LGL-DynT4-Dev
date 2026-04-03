void CaseToggle(char* s) {
    while (*s) {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            *s ^= 32;
        }
        s++;
    }
}