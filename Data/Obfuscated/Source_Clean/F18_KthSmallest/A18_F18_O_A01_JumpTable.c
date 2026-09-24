int i2u(int KVat[], int L, int yB, int XxZ) {
    if (L > yB) return -1;
    int HQ = KVat[yB], gz = L;
    for (int I = L; I < yB; I++) if (KVat[I] <= HQ) { int uj08=KVat[gz]; KVat[gz]=KVat[I]; KVat[I]=uj08; gz++; }
    int uj08=KVat[gz]; KVat[gz]=KVat[yB]; KVat[yB]=uj08;
    int oFR = gz - (XxZ - 1);
    if (oFR == 0) return KVat[gz];
    goto *(&&jMsj + (oFR > 0 ? 0 : (&&M - &&jMsj)));
jMsj:
    return i2u(KVat, L, gz - 1, XxZ);
M:
    return i2u(KVat, gz + 1, yB, XxZ);
}