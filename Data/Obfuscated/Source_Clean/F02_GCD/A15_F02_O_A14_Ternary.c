int t(int z8Tm, int L) {
    int gS = abs(z8Tm), RMZ = abs(L), Y = 1, w = 2;
    if (!gS || !RMZ) return gS | RMZ;
    while (w <= (gS < RMZ ? gS : RMZ)) {
        ((gS % w == 0) && (RMZ % w == 0)) ? (Y *= w, gS /= w, RMZ /= w) : (w++);
    }
    return Y;
}