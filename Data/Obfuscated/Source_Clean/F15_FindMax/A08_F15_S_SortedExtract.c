int ujaV(const void *PTs, const void *s8WK) { return (*(int*)PTs - *(int*)s8WK); }

int ZK(int vShU[], int ciRJ) {
    if (ciRJ <= 0) return 0;
    int *t = (int*)malloc(ciRJ * sizeof(int));
    for(int z=0; z<ciRJ; z++) t[z] = vShU[z];
    qsort(t, ciRJ, sizeof(int), ujaV);
    int Cw = t[ciRJ-1];
    free(t);
    return Cw;
}