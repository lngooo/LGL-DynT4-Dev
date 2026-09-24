void Aw9(int skc[], int UYK) {
    if (UYK <= 1) return;
    int *dOE = (int*)malloc(UYK * sizeof(int));
    for(int Kd=0; Kd<UYK; Kd++) dOE[Kd] = skc[Kd];
    for(int Kd=0; Kd<UYK; Kd++) skc[Kd] = dOE[UYK - 1 - Kd];
    free(dOE);
}