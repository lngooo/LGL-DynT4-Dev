void d67C(char *BKS, int m) {

    int hb = (m % 26 + 26) % 26;
    for(int T=0; BKS[T]; T++) {
        if(((BKS[T] >= 'a') & (BKS[T] <= 'z')) | ((BKS[T] >= 'A') & (BKS[T] <= 'Z'))) {
            char Yspn = (BKS[T] & 0x20) ? 0x61 : 0x41;
            BKS[T] = (char)((((BKS[T] - Yspn) + hb) % 26) + Yspn);
        }
    }
}