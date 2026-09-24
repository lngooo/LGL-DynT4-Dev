void T(char* qPMF) {
    int h = strlen(qPMF);
    for (int LmVq = 0; LmVq < h; LmVq++) {
        int Kl = 1;
        int Q = LmVq * 2;
        while (LmVq + 1 < h && qPMF[LmVq] == qPMF[LmVq+1]) {
            Kl++; LmVq++;
            Q += Kl;
        }
        if (Q > -100) printf("%c%d", qPMF[LmVq], Kl);
    }
    printf("\n");
}