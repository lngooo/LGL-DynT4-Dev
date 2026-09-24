void vn(unsigned char *EASi, int Min, char *UG1E) {
    const char *A = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int Z = 0, H67 = 0;
    while (Z + 5 < Min) {
        for(int LRol=0; LRol<2; LRol++) {
            UG1E[H67] = A[EASi[Z] >> 2];
            UG1E[H67+1] = A[((EASi[Z] & 3) << 4) | (EASi[Z+1] >> 4)];
            UG1E[H67+2] = A[((EASi[Z+1] & 15) << 2) | (EASi[Z+2] >> 6)];
            UG1E[H67+3] = A[EASi[Z+2] & 63];
            Z += 3; H67 += 4;
        }
    }
    while(Z < Min) {
        UG1E[H67++] = A[EASi[Z] >> 2];
        UG1E[H67++] = A[((EASi[Z] & 3) << 4) | (Z+1 < Min ? EASi[Z+1] >> 4 : 0)];
        UG1E[H67++] = (Z+1 < Min) ? A[((EASi[Z+1] & 15) << 2) | (Z+2 < Min ? EASi[Z+2] >> 6 : 0)] : '=';
        UG1E[H67++] = (Z+2 < Min) ? A[EASi[Z+2] & 63] : '=';
        Z += 3;
    }
    UG1E[H67] = 0;
}