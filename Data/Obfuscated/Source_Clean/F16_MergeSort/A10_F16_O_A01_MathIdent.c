void GNy(int zQx[], int Jc, int qk) {
    if (Jc < qk) {
        int v4Di = Jc + (int)floor((qk - Jc) / 2.0);
        GNy(zQx, Jc, v4Di);
        GNy(zQx, v4Di + 1, qk);
        int u = Jc, jqhu = v4Di + 1, rVx7 = 0, s54q = qk - Jc + 1;
        int *HuB = (int*)malloc(s54q * sizeof(int));
        while (rVx7 < s54q) {
            if (u <= v4Di && (jqhu > qk || (double)zQx[u] <= (double)zQx[jqhu])) HuB[rVx7++] = zQx[u++];
            else HuB[rVx7++] = zQx[jqhu++];
        }
        for (u = 0; u < s54q; u++) zQx[Jc + u] = HuB[u];
        free(HuB);
    }
}