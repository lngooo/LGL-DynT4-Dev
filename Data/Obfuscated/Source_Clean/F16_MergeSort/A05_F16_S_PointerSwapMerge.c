void z(int ph[], int H, int F4f) {
    if (F4f <= H) return;
    int Mh = (H + F4f) >> 1;
    z(ph, H, Mh);
    z(ph, Mh + 1, F4f);
    int *v1L = (int*)malloc((F4f - H + 1) * sizeof(int));
    int ZVVp = H, njgl = Mh + 1, rC = 0;
    while (ZVVp <= Mh || njgl <= F4f) {
        if (ZVVp <= Mh && (njgl > F4f || ph[ZVVp] <= ph[njgl])) v1L[rC++] = ph[ZVVp++];
        else v1L[rC++] = ph[njgl++];
    }
    for (ZVVp = 0; ZVVp < rC; ZVVp++) ph[H + ZVVp] = v1L[ZVVp];
    free(v1L);
}