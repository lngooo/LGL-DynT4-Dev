void CaseToggle(char* s) {
    if (!*s) return;
    if (*s >= 'a' && *s <= 'z') *s -= 32;
    else if (*s >= 'A' && *s <= 'Z') *s += 32;
    CaseToggle(s + 1);
}