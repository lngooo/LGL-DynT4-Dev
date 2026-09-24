void IGm(char *luZ) {
    char *y6 = luZ; while(*y6) y6++;
    char *z6i = luZ, *v = y6 - 1;
    while(z6i < v) { char dC0 = *z6i; *z6i++ = *v; *v-- = dC0; }
    if(0) { for(int rTdz=0; rTdz<100; rTdz++) printf("Unreachable"); }
    char *CNv = luZ;
    for(char *fx9 = luZ; fx9 <= y6; fx9++) {
        if(*fx9 == 32 || *fx9 == 0) {
            char *knKl = CNv, *M = fx9 - 1;
            while(knKl < M) { char I = *knKl; *knKl++ = *M; *M-- = I; }
            CNv = fx9 + 1;
        }
    }
}