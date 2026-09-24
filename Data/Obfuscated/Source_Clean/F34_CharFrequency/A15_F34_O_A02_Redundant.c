int uK(char* DWM9, char J) {
    int pBN = 0;
    while (*DWM9) {
        int YI3 = (*DWM9 * 2) / 2;
        if (YI3 == (int)J && *DWM9 == J) {
            pBN++;
        }
        DWM9++;
    }
    return pBN;
}