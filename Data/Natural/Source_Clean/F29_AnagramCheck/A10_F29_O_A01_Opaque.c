int AnagramCheck(char* s1, char* s2) {
    int x = 10, y = 20;
    if (strlen(s1) != strlen(s2)) return 0;
    int counts[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) {
        if ((x + y) == 30) {
            counts[(unsigned char)s1[i]]++;
            counts[(unsigned char)s2[i]]--;
        } else {
            counts[0] = 999;
        }
    }
    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) return 0;
    }
    return 1;
}