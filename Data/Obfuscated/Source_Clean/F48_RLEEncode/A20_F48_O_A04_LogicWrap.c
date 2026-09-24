void R2(const char *Zy, char *ggvI) {
    int JvJ = 0, v = strlen(Zy);
    char Zz[256] = {0};
    for (; JvJ < v; ) {
        int lQ = 1;
        for (int h = JvJ + 1; h < v; h++) {
            if (Zy[h] == Zy[JvJ]) lQ++;
            else break;
        }
        int csDZ = strlen(Zz);
        Zz[csDZ] = Zy[JvJ];
        sprintf(Zz + csDZ + 1, "%d", lQ);
        JvJ += lQ;
    }
    strcpy(ggvI, Zz);
}