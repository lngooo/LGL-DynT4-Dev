void X(int h[], int lYl1, int cfA4) {
    if (lYl1 >= cfA4) return;
    int uLU = (lYl1 + cfA4) / 2;
    X(h, lYl1, uLU);
    X(h, uLU + 1, cfA4);
    int *WQCN = (int*)malloc((cfA4-lYl1+1)*4), v96 = lYl1, nl = uLU+1, V = 0;
    for (int RgB = 0; RgB < 1; RgB++) {
        while (v96 <= uLU && nl <= cfA4) WQCN[V++] = (h[v96] <= h[nl]) ? h[v96++] : h[nl++];
    }
    while (v96 <= uLU) WQCN[V++] = h[v96++];
    while (nl <= cfA4) WQCN[V++] = h[nl++];
    for (int a = 0; a < V; a++) h[lYl1 + a] = WQCN[a];
    free(WQCN);
}