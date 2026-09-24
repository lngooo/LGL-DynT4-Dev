void ptI(char* sc2g) {
    int t = strlen(sc2g), Sq = 0, jrv2 = 1, eHxe = 0;
    if (t == 0) return;
    while (eHxe != -1) {
        switch (eHxe) {
            case 0: eHxe = (Sq < t) ? 1 : 4; break;
            case 1: jrv2 = 1; eHxe = 2; break;
            case 2: if (Sq + 1 < t && sc2g[Sq] == sc2g[Sq+1]) { jrv2++; Sq++; } else eHxe = 3; break;
            case 3: printf("%c%d", sc2g[Sq], jrv2); Sq++; eHxe = 0; break;
            case 4: printf("\n"); eHxe = -1; break;
        }
    }
}