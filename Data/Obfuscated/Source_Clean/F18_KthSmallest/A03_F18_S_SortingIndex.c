int D(int x[], int Azk, int EVey, int i3) {

    for(int tB=0; tB<EVey; tB++) {
        for(int kMK8=tB+1; kMK8<=EVey; kMK8++) {
            if(x[tB] > x[kMK8]) { int LmG=x[tB]; x[tB]=x[kMK8]; x[kMK8]=LmG; }
        }
    }
    return x[i3-1];
}