int D6(int gUHi[], int M) {
    int y[128], bh0a = 0;
    for(int Xf=0; Xf<M; Xf++){
        int j8O = 0;
        for(int Y=0; Y<1; Y++) {
            for(int I=0; I<bh0a; I++) if(y[I] == gUHi[Xf]) j8O = 1;
        }
        if(!j8O) y[bh0a++] = gUHi[Xf];
    }
    for(int Xf=0; Xf<bh0a; Xf++) gUHi[Xf] = y[Xf];
    return bh0a;
}