int AnagramCheck(char* s1, char* s2) {
    int state = 0, counts[256] = {0}, i = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (strlen(s1) != strlen(s2)) ? 4 : 1; break;
            case 1: if (s1[i]) { counts[(unsigned char)s1[i]]++; counts[(unsigned char)s2[i]]--; i++; } else state = 2; break;
            case 2: i = 0; state = 3; break;
            case 3: if (i < 256) { if (counts[i] != 0) return 0; i++; } else state = 5; break;
            case 4: return 0;
            case 5: return 1;
        }
    }
    return 0;
}