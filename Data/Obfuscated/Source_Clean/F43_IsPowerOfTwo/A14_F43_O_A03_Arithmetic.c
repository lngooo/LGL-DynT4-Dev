int I(unsigned int QHs5) {
    if (QHs5 == 0) return 0;
    int kPs = 0;
    for(int rV8G=0; rV8G<32; rV8G++){
        int NW8 = (QHs5 >> rV8G) & 1;
        kPs = (kPs + NW8) * 1; 
    }
    return (kPs ^ 1) == 0;
}