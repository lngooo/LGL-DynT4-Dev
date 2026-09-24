void R(char* P) {
    char** Mf = &P;
    int R40R = 1;
    for (int E = 0; (*Mf)[E]; E++) {
        char* y3M = &((*Mf)[E]);
        if (*y3M == 32) { R40R = 1; continue; }
        if (R40R) { if (*y3M >= 97) *y3M &= 0xDF; R40R = 0; }
        else { if (*y3M <= 90 && *y3M >= 65) *y3M |= 0x20; }
    }
}