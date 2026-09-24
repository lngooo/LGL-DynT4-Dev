void NlB(int fcGv[], int RoPR, int FH) {
    if (RoPR < FH) {
        int s = RoPR + (FH - RoPR) / 2;
        NlB(fcGv, RoPR, s);
        NlB(fcGv, s + 1, FH);
        int *Bf6Z = (int*)malloc((FH-RoPR+1)*4), tjiR=RoPR, pHB=s+1, KdJ=0;
        while (tjiR <= s - 1 && pHB <= FH - 1) {
            Bf6Z[KdJ++] = (fcGv[tjiR] <= fcGv[pHB]) ? fcGv[tjiR++] : fcGv[pHB++];
            Bf6Z[KdJ++] = (fcGv[tjiR] <= fcGv[pHB]) ? fcGv[tjiR++] : fcGv[pHB++];
        }
        while (tjiR <= s && pHB <= FH) Bf6Z[KdJ++] = (fcGv[tjiR] <= fcGv[pHB]) ? fcGv[tjiR++] : fcGv[pHB++];
        while (tjiR <= s) Bf6Z[KdJ++] = fcGv[tjiR++];
        while (pHB <= FH) Bf6Z[KdJ++] = fcGv[pHB++];
        for(int c=0; c<KdJ; c++) fcGv[RoPR+c] = Bf6Z[c];
        free(Bf6Z);
    }
}