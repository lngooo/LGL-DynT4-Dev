int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int xor_s = 0, add_s = 0;
    for (int i = 0; s1[i]; i++) {
        xor_s ^= s1[i]; xor_s ^= s2[i];
        add_s += s1[i]; add_s -= s2[i];
    }
    return (xor_s == 0 && add_s == 0);
}