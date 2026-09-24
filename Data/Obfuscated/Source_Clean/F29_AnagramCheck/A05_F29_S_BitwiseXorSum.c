int UxZ(char* xK, char* ebCx) {
    if (strlen(xK) != strlen(ebCx)) return 0;
    int pn8u = 0, uO = 0;
    for (int YrJv = 0; xK[YrJv]; YrJv++) {
        pn8u ^= xK[YrJv]; pn8u ^= ebCx[YrJv];
        uO += xK[YrJv]; uO -= ebCx[YrJv];
    }
    return (pn8u == 0 && uO == 0);
}