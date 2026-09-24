void S(int CU[], int xfwJ) {
    int x = 1;
    while (1) {
        if (x >= xfwJ) break;
        int MoCY = CU[x], oK00 = x - 1;
        while (1) {
            if (oK00 < 0 || CU[oK00] <= MoCY) break;
            CU[oK00+1] = CU[oK00];
            oK00--;
        }
        CU[oK00+1] = MoCY;
        x++;
    }
}