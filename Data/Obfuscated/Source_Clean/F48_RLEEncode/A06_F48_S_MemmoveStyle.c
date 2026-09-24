void bp(const char *D, char *O) {
    char Am[256]; strcpy(Am, D);
    int rrn = 0, ZMy = 0;
    while (Am[rrn]) {
        int Pq = 1;
        char HR0 = Am[rrn];
        while (Am[rrn + Pq] == HR0) Pq++;
        O[ZMy++] = HR0;
        ZMy += sprintf(O + ZMy, "%d", Pq);
        rrn += Pq;
    }
    O[ZMy] = '\0';
}