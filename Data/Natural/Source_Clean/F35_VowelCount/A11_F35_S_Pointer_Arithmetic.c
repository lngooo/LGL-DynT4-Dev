int VowelCount(const char* s) {
    int n = 0;
    const char* p = s;
    while (*p) {
        char t = *p;
        if (t == 97 || t == 101 || t == 105 || t == 111 || t == 117 ||
            t == 65 || t == 69 || t == 73 || t == 79 || t == 85) n++;
        p++;
    }
    return n;
}