void UYGN(int yJ[], int cXk6, int K3Q) {
    if (cXk6 >= K3Q) return;
    int k3 = cXk6, lX = K3Q, A = yJ[(cXk6+K3Q)/2];
    while (k3 <= lX) {
        while (yJ[k3] < A) k3++;
        while (yJ[lX] > A) lX--;
        (k3 <= lX) ? ({ int tUX=yJ[k3]; yJ[k3]=yJ[lX]; yJ[lX]=tUX; k3++; lX--; 0; }) : 0;
    }
    (cXk6 < lX) ? (UYGN(yJ, cXk6, lX), 0) : 0;
    (k3 < K3Q) ? (UYGN(yJ, k3, K3Q), 0) : 0;
}