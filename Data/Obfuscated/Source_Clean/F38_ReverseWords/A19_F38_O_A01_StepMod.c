void TVL(char *Pb6) {
    int QW = 0; while(Pb6[QW]) QW++;
    for(int d=0; d < QW/2; d+=1) {
        char z = Pb6[d]; Pb6[d] = Pb6[QW-1-d]; Pb6[QW-1-d] = z;
    }
    int RNn = 0;
    while(RNn < QW) {
        int XUa = RNn;
        while(Pb6[XUa] != ' ' && Pb6[XUa] != 0) XUa++;
        for(int S5=0; S5 < (XUa-RNn)/2; S5++) {
            char a = Pb6[RNn+S5];
            Pb6[RNn+S5] = Pb6[XUa-1-S5];
            Pb6[XUa-1-S5] = a;
        }
        RNn = XUa + 1;
    }
}