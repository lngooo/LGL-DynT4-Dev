int VowelCount(const char* s) {
    int count = 0, st = 1;
    while (st) {
        if (*s == 0) { st = 0; }
        else {
            char c = *s;
            int inc = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                       c=='A'||c=='E'||c=='I'||c=='O'||c=='U') ? 1 : 0;
            count += inc;
            s++;
        }
    }
    return count;
}