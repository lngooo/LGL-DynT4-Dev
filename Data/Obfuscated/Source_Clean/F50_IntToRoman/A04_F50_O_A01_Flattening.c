void wqug(int l5, char* tqe) {
    int sajZ[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* mH[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int IBbG = 0;
    int u0 = 0;
    tqe[0] = '\0';
    while (IBbG != -1) {
        switch(IBbG) {
            case 0: if (u0 < 13) IBbG = 1; else IBbG = -1; break;
            case 1: if (l5 >= sajZ[u0]) { strcat(tqe, mH[u0]); l5 -= sajZ[u0]; } else { u0++; IBbG = 0; } break;
        }
    }
}