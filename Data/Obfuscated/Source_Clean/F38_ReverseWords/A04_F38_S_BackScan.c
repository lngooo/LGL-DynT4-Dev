void LHGX(char *WS) {
    int t = strlen(WS); char ELS[256] = "";
    int Eg = t;
    for(int CRi=t-1; CRi>=-1; CRi--) {
        if(CRi == -1 || WS[CRi] == ' ') {
            strncat(ELS, WS + CRi + 1, Eg - CRi - 1);
            if(CRi != -1) strcat(ELS, " ");
            Eg = CRi;
        }
    }
    strcpy(WS, ELS);
}