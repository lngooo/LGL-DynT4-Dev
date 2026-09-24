void E7(char* bv2) {
    while (*bv2) {
        char YWBg = *bv2;
        int nkmN = 0;
        char *XLVS = bv2;
        while (*XLVS && *XLVS == YWBg) {
            nkmN++;
            XLVS++;
        }
        printf("%c%d", YWBg, nkmN);
        bv2 = XLVS;
    }
    printf("\n");
}