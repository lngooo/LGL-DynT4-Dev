void Q9x(char *qBd) {
    char *I4[128]; int SeE = 0;
    char CT[256]; strcpy(CT, qBd);
    char *a = strtok(CT, " ");
    while(a) { I4[SeE++] = a; a = strtok(NULL, " "); }
    qBd[0] = '\0';
    for(int pPM=SeE-1; pPM>=0; pPM--) {
        strcat(qBd, I4[pPM]);
        if(pPM > 0) strcat(qBd, " ");
    }
}