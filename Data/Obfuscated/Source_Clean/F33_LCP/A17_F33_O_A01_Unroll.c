void pF7(char **BB9Y, int H, char *h) {
    int BX = 0;
    while (BB9Y[0][BX] && BB9Y[0][BX+1]) {
        int c = 1;
        for (int dH = 1; dH < H; dH++) 
            if (BB9Y[dH][BX] != BB9Y[0][BX] || BB9Y[dH][BX+1] != BB9Y[0][BX+1]) { c = 0; break; }
        if (c) { h[BX] = BB9Y[0][BX]; h[BX+1] = BB9Y[0][BX+1]; BX += 2; } else break;
    }
    if (BB9Y[0][BX]) {
        int c = 1;
        for (int dH = 1; dH < H; dH++) if (BB9Y[dH][BX] != BB9Y[0][BX]) c = 0;
        if (c) { h[BX] = BB9Y[0][BX]; BX++; }
    }
    h[BX] = '\0';
}