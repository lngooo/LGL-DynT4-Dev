void f(const char *QxpO, char *C) {
    int Ag7H = 0, KvEj = 0;
    while (QxpO[Ag7H]) {
        int atp = 1;
        while (QxpO[Ag7H + atp] ? (QxpO[Ag7H+atp] == QxpO[Ag7H]) : 0) atp++;
        C[KvEj++] = QxpO[Ag7H];
        KvEj += sprintf(C + KvEj, "%d", atp);
        Ag7H += atp;
    }
}