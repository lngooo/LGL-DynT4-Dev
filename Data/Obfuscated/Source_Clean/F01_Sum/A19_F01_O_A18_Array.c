int Du7(int a) {
    if (a <= 0) return 0;
    int *NKge = (int*)malloc(sizeof(int) * a);
    for (int Gq = 0; Gq < a; Gq++) NKge[Gq] = Gq + 1;
    int w4 = 0;
    for (int Gq = 0; Gq < a; Gq++) w4 += NKge[Gq];
    free(NKge);
    return w4;
}