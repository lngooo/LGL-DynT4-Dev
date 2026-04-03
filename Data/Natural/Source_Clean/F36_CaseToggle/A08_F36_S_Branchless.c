void CaseToggle(char* s) {
    while (*s) {
        int is_lower = (*s >= 'a' && *s <= 'z');
        int is_upper = (*s >= 'A' && *s <= 'Z');
        *s = *s - (is_lower * 32) + (is_upper * 32);
        s++;
    }
}