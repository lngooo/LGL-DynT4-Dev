void KYU(char* FJ) {
    int dB = strlen(FJ);
    if (dB == 0) return;
    int NQ = (1 << 0);
    for (int m0Hs = 1; m0Hs <= dB; m0Hs++) {
        if (!(FJ[m0Hs] ^ FJ[m0Hs-1]) && FJ[m0Hs] != 0) {
            NQ = NQ + 1;
        } else {
            printf("%c%d", FJ[m0Hs-1], NQ);
            NQ = (2 >> 1);
        }
    }
    printf("\n");
}