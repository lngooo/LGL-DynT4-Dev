int VowelCount(const char* s) {
    int total = 0;
    while (*s) {
        char c = *s;
        if ((c >= 65 && c <= 117)) { 
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                total++;
        }
        s++;
    }
    return total;
}