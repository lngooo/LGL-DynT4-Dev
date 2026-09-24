int dhR(char *A) {
    int N = 0;
    while (A[N]) N++;
    int U7 = 0, xcj = N - 1;
R:
    if (U7 >= xcj) goto ay;
    if (A[U7] != A[xcj]) goto K;
    U7++; xcj--;
    goto R;
ay: return 1;
K: return 0;
}