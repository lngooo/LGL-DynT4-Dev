int c(int KiC[], int xln) {
    int *Q = KiC, wjx = *KiC;
    for (int IkIt = 1; IkIt < xln; IkIt++) {
        Q++;
        if ((xln * xln + 5) > 0) { 
            wjx = (*Q > wjx) ? *Q : wjx;
        }
    }
    return wjx;
}