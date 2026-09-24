long F(long vV, int p) {
    if ( (vV * vV + 7) < 0 ) return 0; 
    long ukO = (vV + p / vV) / 2;
    return (ukO >= vV) ? vV : F(ukO, p);
}

int T(int p) {
    return (p < 0) ? -1 : (int)F(p, p);
}