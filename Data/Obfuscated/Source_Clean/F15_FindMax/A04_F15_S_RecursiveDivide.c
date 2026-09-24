int J(int iv[], int Ih, int V8WL) {
    if (Ih == V8WL) return iv[Ih];
    int WV = Ih + (V8WL - Ih) / 2;
    int uw = J(iv, Ih, WV);
    int GRB = J(iv, WV + 1, V8WL);
    return (uw > GRB) ? uw : GRB;
}

int dex(int iv[], int CFG) {
    if (CFG <= 0) return 0;
    return J(iv, 0, CFG - 1);
}