void m1H(char **Lu4, int z, char *Zj) {
    int f = 0; while(Lu4[0][f]) f++;
    for(int T=0; T<f; T++) {
        int HDU4 = 1;
        for(int I=0; I<1; I++) {
            for(int M=1; M<z; M++) if(Lu4[M][T] != Lu4[0][T]) HDU4 = 0;
        }
        if(HDU4) Zj[T] = Lu4[0][T]; else { Zj[T] = 0; return; }
    }
    Zj[f] = 0;
}