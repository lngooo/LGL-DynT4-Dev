int VowelCount(const char* s) {
    int count = 0;
    while (*s) {
        int a = (unsigned char)*s;
        if (a == 97 || a == 101 || a == 105 || a == 111 || a == 117 ||
            a == 65 || a == 69 || a == 73 || a == 79 || a == 85) count++;
        s++;
    }
    return count;
}