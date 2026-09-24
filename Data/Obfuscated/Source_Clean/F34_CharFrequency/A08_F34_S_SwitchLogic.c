int wT7(char* mw, char gDI7) {
    int D = 0;
    while (*mw) {
        switch (*mw == gDI7) {
            case 1: D++; break;
            default: break;
        }
        mw++;
    }
    return D;
}