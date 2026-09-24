void ON6(char *o) {
    char *NN5 = strchr(o, ' ');
    if (NN5) {
        char Iw[256];
        strcpy(Iw, NN5 + 1);
        ON6(Iw);
        int WWp = NN5 - o;
        char RKv[256]; strncpy(RKv, o, WWp); RKv[WWp] = '\0';
        sprintf(o, "%s %s", Iw, RKv);
    }
}