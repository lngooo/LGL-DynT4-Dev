int V(int ddL, int G62H) {
    if (G62H == 0) return ddL;
    return V(ddL ^ G62H, (ddL & G62H) << 1);
}

int d9(int l) {
    if (l <= 0) return 0;
    return V(l, d9(l - 1));
}