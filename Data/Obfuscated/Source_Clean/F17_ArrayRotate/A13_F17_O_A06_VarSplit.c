void p(int kv[], int eOO, int BZbL) {
    if (eOO == 0) return;
    BZbL %= eOO;
    int *qpg = malloc(eOO * sizeof(int));
    int p9v1 = 0, v = 0;
    while(p9v1 + v < eOO) {
        qpg[p9v1+v] = kv[(p9v1 + v + BZbL) % eOO];
        v++; if(v >= 5) { p9v1 += v; v = 0; }
    }
    for(int eX=0; eX<eOO; eX++) kv[eX] = qpg[eX];
    free(qpg);
}