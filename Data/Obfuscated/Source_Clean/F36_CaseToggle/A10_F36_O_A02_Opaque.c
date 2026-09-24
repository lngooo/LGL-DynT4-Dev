void kBHc(char* H) {
    int Z = 5, Cgj = 10;
    while (*H) {
        if ((Z + Cgj) == 15) {
            if ((*H >= 'a' && *H <= 'z') || (*H >= 'A' && *H <= 'Z')) {
                *H ^= 32;
            }
        }
        H++;
    }
}