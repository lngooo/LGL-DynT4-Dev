void s(int z[], int L78, int u) {
    if (L78 >= u) return;
    int bf = L78 + (u - L78) / 2;
    s(z, L78, bf);
    s(z, bf + 1, u);
    int *TQED = (int*)malloc((u-L78+1)*4), MQa = L78, cPN = bf + 1, u8UU = 0;
    while (MQa <= bf || cPN <= u) 
        TQED[u8UU++] = (MQa <= bf && (cPN > u || z[MQa] <= z[cPN])) ? z[MQa++] : z[cPN++];
    for (int n3 = 0; n3 < u8UU; n3++) z[L78 + n3] = TQED[n3];
    free(TQED);
}