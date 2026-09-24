int KPys(char *C6Vp) {
    int NqwO = 0; while (C6Vp[NqwO]) NqwO++;
    int E65j = 0, I4xo = NqwO - 1, sO = 0;
    while (sO != 3) {
        switch(sO) {
            case 0: sO = (E65j < I4xo) ? 1 : 2; break;
            case 1: if (C6Vp[E65j] != C6Vp[I4xo]) return 0; E65j++; I4xo--; sO = 0; break;
            case 2: return 1;
        }
    }
    return 1;
}