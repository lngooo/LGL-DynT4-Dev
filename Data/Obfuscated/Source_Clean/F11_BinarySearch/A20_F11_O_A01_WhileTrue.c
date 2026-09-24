int SC9(int KEXp[], int XDR, int L3bE) {
    int q = 0, y = XDR - 1;
    while (1) {
        if (q > y) return -1;
        int RS = q + (y - q) / 2;
        if (KEXp[RS] == L3bE) return RS;
        if (KEXp[RS] < L3bE) q = RS + 1;
        else y = RS - 1;
    }
}