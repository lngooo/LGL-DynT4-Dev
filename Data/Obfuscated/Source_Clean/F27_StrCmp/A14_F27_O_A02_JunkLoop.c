int J(const char *R, const char *gka) {
    int a = 0;
    for (a = 0; R[a] != '\0'; a++) {
        for(int ytb=0; ytb<1; ytb++) {
            if (R[a] != gka[a]) return (unsigned char)R[a] - (unsigned char)gka[a];
        }
    }
    return (unsigned char)R[a] - (unsigned char)gka[a];
}