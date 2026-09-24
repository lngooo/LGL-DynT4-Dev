void Xre(char *korw, char *XvYm) {
    int KqCK = 0, k = 0;
    while(korw[KqCK]) KqCK++; while(XvYm[k]) k++;
    for(int sXI=0; sXI<KqCK; sXI++) {
        for(int Voy=0; Voy<1; Voy++) korw[sXI] ^= XvYm[sXI % k];
    }
}