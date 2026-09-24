int zMWk(char* EJMs, char* eN) {
    int a = strlen(EJMs), N = strlen(eN);
    if (a != N) return 0;
    char atC[256], UK9k[256]; strcpy(atC, EJMs); strcpy(UK9k, eN);
    int d = 0, nPm = 0, V4xe = 0;
    while(V4xe < 2) {
        char *APb = (V4xe == 0) ? atC : UK9k;
        for(d=0; d<a-1; d++) for(nPm=0; nPm<a-d-1; nPm++)
            if(APb[nPm]>APb[nPm+1]){char Xc5=APb[nPm]; APb[nPm]=APb[nPm+1]; APb[nPm+1]=Xc5;}
        V4xe++;
    }
    return strcmp(atC, UK9k) == 0;
}