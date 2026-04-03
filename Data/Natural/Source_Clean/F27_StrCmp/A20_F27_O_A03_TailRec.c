int rec_helper(const char *s1, const char *s2) {
    return (*s1 == '\0' || *s1 != *s2) ? (*(unsigned char*)s1 - *(unsigned char*)s2) : rec_helper(s1+1, s2+1);
}

int StrCmp(const char *s1, const char *s2) {
    return rec_helper(s1, s2);
}