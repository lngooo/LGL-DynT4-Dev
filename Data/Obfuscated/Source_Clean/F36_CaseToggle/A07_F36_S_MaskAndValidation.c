void RO(char* o) {
    for (int cpd = 0; o[cpd]; cpd++) {
        unsigned char b = (unsigned char)o[cpd];
        unsigned char z9F = b | 32;
        if (z9F >= 'a' && z9F <= 'z') {
            o[cpd] = (char)(b ^ 32);
        }
    }
}