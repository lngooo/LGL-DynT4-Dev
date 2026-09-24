int TE(char* Ah7P) {
    char Tn5[512], Pcxk[512];
    memset(Tn5, 0, 512);
    strncpy(Tn5, Ah7P, 511);
    strcpy(Pcxk, Tn5);
    int mwed = 0;
    char* Z = strtok(Pcxk, " ");
    while(Z) { mwed++; Z = strtok(NULL, " "); }
    return mwed;
}