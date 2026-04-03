void CaseToggle(char* s) {
    int a = 5, b = 10;
    while (*s) {
        if ((a + b) == 15) {
            if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
                *s ^= 32;
            }
        }
        s++;
    }
}