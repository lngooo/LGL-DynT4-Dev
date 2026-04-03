int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int c1[256] = {0}, c2[256] = {0};
    for (int i = 0; s1[i]; i++) { c1[(unsigned char)s1[i]]++; c2[(unsigned char)s2[i]]++; }
    for (int i = 0; i < 256; i++) if (c1[i] != c2[i]) return 0;
    return 1;
}