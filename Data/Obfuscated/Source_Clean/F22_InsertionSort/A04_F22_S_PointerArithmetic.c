void WQ6(int eZ8K[], int w) {
    int *A, *J, irUc;
    for (A = eZ8K + 1; A < eZ8K + w; A++) {
        irUc = *A;
        J = A - 1;
        while (J >= eZ8K && *J > irUc) {
            *(J + 1) = *J;
            J--;
        }
        *(J + 1) = irUc;
    }
}