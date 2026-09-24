int eCy(char* YX, char* Tjx) {
    int E = strlen(YX), oO = strlen(Tjx);
    if (E != oO) return 0;
    char u[256]; strcpy(u, Tjx);
    for(int NEJ=0; NEJ<E; NEJ++) {
        int Yr = 0;
        for(int FuM=0; FuM<oO; FuM++) {
            if(YX[NEJ] == u[FuM]) {
                u[FuM] = 0; Yr = 1; break;
            }
        }
        if(!Yr) return 0;
    }
    return 1;
}