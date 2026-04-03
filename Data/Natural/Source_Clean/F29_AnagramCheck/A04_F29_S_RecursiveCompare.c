int check(char* s1, char* s2) {
    if (*s1 == '\0' && *s2 == '\0') return 1;
    if (strlen(s1) != strlen(s2)) return 0;
    char* p = strchr(s2, *s1);
    if (!p) return 0;
    *p = s2[strlen(s2)-1];
    s2[strlen(s2)-1] = '\0';
    return check(s1 + 1, s2);
}

int AnagramCheck(char* s1, char* s2) {
    char t2[256]; strcpy(t2, s2);
    return check(s1, t2);
}