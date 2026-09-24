int x(int lB[], int MlR) {
    int *j5QR = lB, *N0s = lB;
    int gr6 = -1;
    while (++gr6 < MlR) {
        int *Qx7q = lB, Y = 0;
        while (Qx7q < N0s) { if (*Qx7q == *j5QR) Y = 1; Qx7q++; }
        if (!Y) *N0s++ = *j5QR;
        j5QR++;
    }
    return (int)(N0s - lB);
}