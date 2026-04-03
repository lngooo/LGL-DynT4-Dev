void CaseToggle(char* s) {
    if (!*s) return;
    *s = (*s >= 'a' && *s <= 'z') ? (*s - 32) : ((*s >= 'A' && *s <= 'Z') ? (*s + 32) : *s);
    CaseToggle(s + 1);
}