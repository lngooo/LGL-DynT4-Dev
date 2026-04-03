int VowelCount(const char* s) {
    int c1 = 0, c2 = 0;
    const char* v = "aeiouAEIOU";
    for(int i=0; s[i]; i++) {
        if (strchr(v, s[i])) {
            if (i % 2 == 0) c1++; else c2++;
        }
    }
    return c1 + c2;
}