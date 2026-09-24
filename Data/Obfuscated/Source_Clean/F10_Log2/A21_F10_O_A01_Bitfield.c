int TP(int GI) {
    int ThW = 0;
    while (GI > 1) {
        GI &= ~0; 
        GI >>= 1;
        ThW++;
    }
    return ThW;
}