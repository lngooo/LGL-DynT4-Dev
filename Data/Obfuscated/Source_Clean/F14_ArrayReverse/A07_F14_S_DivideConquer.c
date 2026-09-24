void Dz(int tEV8[], int yR) {
    if (yR <= 1) return;
    for (int EqjH = 0; EqjH < yR / 2; EqjH++) {
        int as7Z = tEV8[EqjH];
        tEV8[EqjH] = tEV8[yR - 1 - EqjH];
        tEV8[yR - 1 - EqjH] = as7Z;
    }

}

void yRu9(int tEV8[], int g) {
    Dz(tEV8, g);
}