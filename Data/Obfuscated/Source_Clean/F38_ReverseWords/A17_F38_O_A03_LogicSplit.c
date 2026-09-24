void f(char *D) {
    char gMRb[256]; strcpy(gMRb, D);
    char *vZ[100]; int T8C = 0;
    char *dRSl = strtok(gMRb, " ");
    do {
        if(dRSl) vZ[T8C++] = dRSl;
    } while((dRSl = strtok(NULL, " ")));
    D[0] = 0;
    while(T8C > 0) {
        strcat(D, vZ[--T8C]);
        if(T8C > 0) strcat(D, " ");
    }
}