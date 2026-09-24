int C5(char *F) {
    int vf4 = 0; while (F[vf4]) vf4++;
    int eli = -1, Rz6 = vf4;
    while (++eli < --Rz6) {
        if (F[eli] != F[Rz6]) return 0;
    }
    return 1;
}