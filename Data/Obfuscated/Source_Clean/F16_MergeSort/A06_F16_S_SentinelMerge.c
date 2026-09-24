void ERp9(int Y7j[], int ETx, int bP9) {
    if (ETx < bP9) {
        int V = ETx + (bP9 - ETx) / 2;
        ERp9(Y7j, ETx, V);
        ERp9(Y7j, V + 1, bP9);
        int S = V - ETx + 1, qJ = bP9 - V;
        int tO9S[128], ZRh[128]; 
        for (int Cy = 0; Cy < S; Cy++) tO9S[Cy] = Y7j[ETx + Cy];
        for (int z = 0; z < qJ; z++) ZRh[z] = Y7j[V + 1 + z];
        tO9S[S] = 2147483647; ZRh[qJ] = 2147483647; 
        int Cy = 0, z = 0;
        for (int tf7 = ETx; tf7 <= bP9; tf7++) Y7j[tf7] = (tO9S[Cy] <= ZRh[z]) ? tO9S[Cy++] : ZRh[z++];
    }
}