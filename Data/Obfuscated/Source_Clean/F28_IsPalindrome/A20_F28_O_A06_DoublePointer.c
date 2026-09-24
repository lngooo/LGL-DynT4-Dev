int mTFM(char *Es) {
    char **C = &Es;
    int Ga = 0; while ((*C)[Ga]) Ga++;
    char *l = *C + Ga - 1;
    char *qj = *C;
    while(qj < l) {
        if(*qj != *l) return 0;
        qj++; l--;
    }
    return 1;
}