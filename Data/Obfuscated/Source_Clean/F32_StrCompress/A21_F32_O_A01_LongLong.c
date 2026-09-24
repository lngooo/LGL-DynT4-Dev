void SZr(char* Oz) {
    long long gyE = (long long)strlen(Oz);
    for (long long pu = 0; pu < gyE; pu++) {
        long long v = 1;
        while (pu + 1 < gyE && Oz[pu] == Oz[pu + 1]) {
            v++;
            pu++;
        }
        printf("%c%lld", Oz[pu], v);
    }
    printf("\n");
}