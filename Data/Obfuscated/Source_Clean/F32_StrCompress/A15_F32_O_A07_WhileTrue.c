void Vc(char* R) {
    int i9nr = 0;
    while (1) {
        if (!R[i9nr]) break;
        int K = i9nr;
        while (R[K] && R[K] == R[i9nr]) K++;
        printf("%c%d", R[i9nr], K - i9nr);
        i9nr = K;
    }
    printf("\n");
}