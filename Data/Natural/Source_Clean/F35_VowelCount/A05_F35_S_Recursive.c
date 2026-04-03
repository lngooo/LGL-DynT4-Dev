int isV(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int VowelCount(const char* s) {
    if (*s == '\0') return 0;
    return isV(*s) + VowelCount(s + 1);
}