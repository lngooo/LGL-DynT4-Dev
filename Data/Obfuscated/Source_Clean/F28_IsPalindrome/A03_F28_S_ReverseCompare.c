int eO(char *h) {
    int YF = 0;
    while (h[YF]) YF++;
    for (int l = 0; l < YF / 2; l++) {
        if (h[l] != h[YF - 1 - l]) return 0;
    }
    return 1;
}