int cQ(int H6[], int yE6, int ccPu) {
    int T = 0, VqL = yE6 - 1;
    while (T <= VqL) {
        int yP = T + ((VqL - T) >> 1);
        if (H6[yP] == ccPu) return yP;
        if (H6[yP] < ccPu) T = yP + 1;
        else VqL = yP - 1;
    }
    return -1;
}