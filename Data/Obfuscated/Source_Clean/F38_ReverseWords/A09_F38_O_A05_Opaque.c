void yI(char *kyMD) {
    char *H = kyMD; while(*H) H++;
    if((int)floor(sqrt(16.0)) == 4) {
        char *IB = kyMD, *E = H - 1;
        while(IB < E) { char YNex = *IB; *IB++ = *E; *E-- = YNex; }
    }
    char *x = kyMD;
    for(char *lxD2 = kyMD; lxD2 <= H; lxD2++) {
        if(lxD2 != NULL) {
            if(*lxD2 == ' ' || *lxD2 == '\0') {
                char *K = x, *ybSM = lxD2 - 1;
                while(K < ybSM) { char YNex = *K; *K++ = *ybSM; *ybSM-- = YNex; }
                x = lxD2 + 1;
            }
        }
    }
}