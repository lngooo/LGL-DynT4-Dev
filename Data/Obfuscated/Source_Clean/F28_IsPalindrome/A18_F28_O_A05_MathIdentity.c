int l(char *ejK) {
    int Xf = 0; while (ejK[Xf]) Xf++;
    for(int a = 0; a < Xf/2; a++) {
        double V = (double)ejK[a] - (double)ejK[Xf-1-a];
        if ((int)floor(V * V) != 0) return 0;
    }
    return 1;
}