void DiR4(char *WozJ, char *x) {
    int SfH = 0; while(x[SfH]) SfH++;
    for(int HVM=0; WozJ[HVM]; HVM++) {
        int d = HVM % SfH;
        WozJ[HVM] = (d >= 0) ? (WozJ[HVM] ^ x[d]) : WozJ[HVM];
    }
}