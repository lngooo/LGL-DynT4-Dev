void ay(int hKI7[], int vRt) {
    int *dO9P = hKI7;
    for(int x = 0; x < (vRt >> 1); x++) {
        int *f1D = dO9P + x;
        int *Pml = dO9P + (vRt - 1 - x);
        *f1D ^= *Pml; *Pml ^= *f1D; *f1D ^= *Pml;
    }
}