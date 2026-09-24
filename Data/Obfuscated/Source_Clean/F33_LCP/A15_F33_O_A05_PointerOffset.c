void qUs0(char **U, int a4NR, char *zx) {
    char *i4d = *U;
    int t = 0;
    while(*(i4d + t)) {
        for(int Z=1; Z<a4NR; Z++) {
            if(*(U[Z] + t) != *(i4d + t)) { *(zx + t) = 0; return; }
        }
        *(zx + t) = *(i4d + t);
        t++;
    }
    *(zx + t) = 0;
}