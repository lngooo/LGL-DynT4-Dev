void B(char* qz) {
    char jWHC[4096] = {0};
    char *N = qz;
    char *f = " \t\n\r\v\f";
    while (*N) {
        int en1 = strcspn(N, f);
        if (en1 > 0) {
            strncat(jWHC, N, en1);
            N += en1;
        } else {
            N++;
        }
    }
    strcpy(qz, jWHC);
}