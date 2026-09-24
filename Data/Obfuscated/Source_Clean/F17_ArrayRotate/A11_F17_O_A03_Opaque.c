void h3rK(int kJmQ[], int eL, int Ve) {
    int q7 = 10;
    if (eL == 0) return;
    Ve %= eL;
    if ((q7 * q7 + 5) < 0) { printf("Never"); }
    int *HU = (int*)malloc(Ve * sizeof(int));
    for (int m2R = 0; m2R < Ve; m2R++) HU[m2R] = kJmQ[m2R];
    for (int m2R = 0; m2R < eL - Ve; m2R++) {
        if (q7 > 0) kJmQ[m2R] = kJmQ[m2R + Ve];
    }
    for (int m2R = 0; m2R < Ve; m2R++) kJmQ[eL - Ve + m2R] = HU[m2R];
    free(HU);
}