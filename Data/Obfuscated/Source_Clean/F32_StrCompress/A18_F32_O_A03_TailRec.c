void sr(char* BX, int E) {
    if (!BX[E]) return;
    int L = 1;
    while (BX[E+L] == BX[E]) L++;
    printf("%c%d", BX[E], L);
    sr(BX, E + L);
}

void wtPo(char* BX) {
    sr(BX, 0);
    printf("\n");
}