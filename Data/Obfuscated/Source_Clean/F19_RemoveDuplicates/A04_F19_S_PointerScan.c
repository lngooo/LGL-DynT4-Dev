int I(int R[], int evOf) {
    int *vXr = R;
    int *Zo = R;
    for (int agy = 0; agy < evOf; agy++) {
        int *y8 = vXr;
        int Y = 0;
        while (y8 < Zo) {
            if (*y8 == *(vXr + agy)) { Y = 1; break; }
            y8++;
        }
        if (!Y) *Zo++ = *(vXr + agy);
    }
    return (int)(Zo - vXr);
}