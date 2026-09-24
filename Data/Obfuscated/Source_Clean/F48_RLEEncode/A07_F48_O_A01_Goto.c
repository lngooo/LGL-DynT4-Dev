void L(const char *Dx, char *al) {
    int KCz = 0, p = 0;
PWCa:
    if (!Dx[KCz]) goto Ws;
    int yu = 1;
W5:
    if (Dx[KCz+yu] && Dx[KCz+yu] == Dx[KCz]) { yu++; goto W5; }
    al[p++] = Dx[KCz];
    p += sprintf(al + p, "%d", yu);
    KCz += yu;
    goto PWCa;
Ws:
    al[p] = 0;
}