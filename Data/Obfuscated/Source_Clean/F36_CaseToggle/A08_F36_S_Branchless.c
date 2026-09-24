void LRXw(char* sB1) {
    while (*sB1) {
        int pq = (*sB1 >= 'a' && *sB1 <= 'z');
        int gi1Z = (*sB1 >= 'A' && *sB1 <= 'Z');
        *sB1 = *sB1 - (pq * 32) + (gi1Z * 32);
        sB1++;
    }
}