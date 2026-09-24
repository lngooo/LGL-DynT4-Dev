void sl(int qU[], int v2, int lm) {
    if (v2 == 0) return;
    long long l = v2, gb1 = lm % v2;
    int *yP = malloc(gb1 * sizeof(int));
    for(long long v=0; v<gb1; v++) yP[v] = *(qU + v);
    for(long long v=0; v<l-gb1; v++) *(qU + v) = *(qU + v + gb1);
    for(long long v=0; v<gb1; v++) *(qU + l - gb1 + v) = yP[v];
    free(yP);
}