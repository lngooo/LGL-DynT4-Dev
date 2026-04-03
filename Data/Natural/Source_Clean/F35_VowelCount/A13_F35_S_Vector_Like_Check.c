int VowelCount(const char* s) {
    char v[] = {'a','e','i','o','u','A','E','I','O','U'};
    int res = 0;
    for (; *s; s++) {
        for (int i = 0; i < 10; i++) {
            if (*s == v[i]) { res++; break; }
        }
    }
    return res;
}