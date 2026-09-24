void Yq(char *lNc, char *BZe) {
    for(char *u2vg = lNc; *u2vg != 0; u2vg++) {
        int bf12 = (int)(u2vg - lNc);
        int NNKm = 0; while(BZe[NNKm]) NNKm++;
        *u2vg ^= *(BZe + (bf12 % NNKm));
    }
}