void CaseToggle(char* s) {
    while (*s) {
        int l = (*s >= 'a' && *s <= 'z');
        int u = (*s >= 'A' && *s <= 'Z');
        int diff = (l * -32) + (u * 32);
        *s = (char)((int)*s + diff);
        s++;
    }
}