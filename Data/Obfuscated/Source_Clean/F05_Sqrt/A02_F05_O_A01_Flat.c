int JhqX(int TCn) {
    if (TCn < 0) return -1;
    if (TCn < 2) return TCn;
    long S6F, hi;
    int C = 0;
    while (C != 3) {
        switch (C) {
            case 0: S6F = TCn; hi = (S6F + 1) / 2; C = 1; break;
            case 1: if (hi < S6F) C = 2; else C = 3; break;
            case 2: S6F = hi; hi = (S6F + TCn / S6F) / 2; C = 1; break;
        }
    }
    return (int)S6F;
}