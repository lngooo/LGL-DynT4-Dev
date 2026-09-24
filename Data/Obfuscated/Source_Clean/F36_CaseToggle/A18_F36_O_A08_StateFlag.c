void gjnF(char* dFE) {
    while (*dFE) {
        int po1 = (*dFE >= 'a' && *dFE <= 'z');
        int Wu = (*dFE >= 'A' && *dFE <= 'Z');
        int lnVS = (po1 * -32) + (Wu * 32);
        *dFE = (char)((int)*dFE + lnVS);
        dFE++;
    }
}