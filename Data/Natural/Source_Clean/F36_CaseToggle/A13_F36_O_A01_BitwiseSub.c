void CaseToggle(char* s) {
    for (; *s; s++) {
        if (*s >= 97 && *s <= 122) {
            *s = *s + (~32 + 1); 
        } else if (*s >= 65 && *s <= 90) {
            *s = *s + 32;
        }
    }
}