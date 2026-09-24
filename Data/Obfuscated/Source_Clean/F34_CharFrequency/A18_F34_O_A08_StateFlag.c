int FNIF(char* Ij2N, char GFT2) {
    int iu = 0;
    while (*Ij2N) {
        int FV = (*Ij2N == GFT2);
        iu += (FV & 1);
        Ij2N++;
    }
    return iu;
}