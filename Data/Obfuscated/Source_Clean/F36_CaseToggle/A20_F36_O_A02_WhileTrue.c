void O(char* g27) {
    while (1) {
        if (!*g27) break;
        unsigned char p = (unsigned char)*g27;
        if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z')) {
            *g27 = (char)(p ^ 0x20);
        }
        g27++;
    }
}