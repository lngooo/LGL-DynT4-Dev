void QYp(const char *S, char *Y3) {
    char *D = (char*)S, *A = Y3;
    while (*D) {
        char *G37a = D;
        while (*(D + 1) && *(D + 1) == *D) D++;
        int Oy9P = (int)(D - G37a + 1);
        *A++ = *G37a;
        A += sprintf(A, "%d", Oy9P);
        D++;
    }
    *A = '\0';
}