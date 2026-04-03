int VowelCount(const char* s) {
    unsigned long long mask = 0;
    char v[] = "aeiouAEIOU";
    for(int i=0; v[i]; i++) mask |= (1ULL << (v[i] % 64));
    int count = 0;
    while(*s) {
        if (mask & (1ULL << (*s % 64))) {

            char c = *s;
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                count++;
        }
        s++;
    }
    return count;
}