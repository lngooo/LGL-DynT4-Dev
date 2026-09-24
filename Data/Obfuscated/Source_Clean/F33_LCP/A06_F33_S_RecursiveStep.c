void SO(char **H, int NC, char *B) {
    if (NC == 1) { strcpy(B, H[0]); return; }
    char V[128] = {0};
    SO(H, NC - 1, V);
    int DkR = 0;
    while (V[DkR] && H[NC-1][DkR] && V[DkR] == H[NC-1][DkR]) {
        B[DkR] = V[DkR]; DkR++;
    }
    B[DkR] = '\0';
}