int rAtE(int x) {
    if (x < 2) return 0;
    int pUO = 2;
    while (1) {
        if (pUO > x / pUO) return 1;
        switch (x % pUO) {
            case 0:
                return 0;
            default:
                pUO++;
                break;
        }
    }
}