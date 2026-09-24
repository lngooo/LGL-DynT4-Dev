void A(int lz4[], int Kob8, int J) {
    int fD = 0;
    while (fD != 2) {
        switch (fD) {
            case 0: if (Kob8 < J) fD = 1; else fD = 2; break;
            case 1: {
                int qS = Kob8 + (J - Kob8) / 2;
                A(lz4, Kob8, qS);
                A(lz4, qS + 1, J);
                int *dz = (int*)malloc((J-Kob8+1)*4);
                int Mqjf=Kob8, k8K=qS+1, a=0;
                while(Mqjf<=qS && k8K<=J) dz[a++] = (lz4[Mqjf]<=lz4[k8K]) ? lz4[Mqjf++] : lz4[k8K++];
                while(Mqjf<=qS) dz[a++] = lz4[Mqjf++]; while(k8K<=J) dz[a++] = lz4[k8K++];
                for(int X67D=0; X67D<a; X67D++) lz4[Kob8+X67D] = dz[X67D];
                free(dz); fD = 2; break;
            }
        }
    }
}