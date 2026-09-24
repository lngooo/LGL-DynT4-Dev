void y(int q[], int ds, int YS) {
    int dDP = ds, e = YS;
    int QrQ2 = q[(ds + YS) / 2];
    while (dDP <= e) {
        while (q[dDP] < QrQ2) dDP++;
        while (q[e] > QrQ2) e--;
        if (dDP <= e) {
            int gbs = q[dDP]; q[dDP] = q[e]; q[e] = gbs;
            dDP++; e--;
        }
    }
    if (ds < e) y(q, ds, e);
    if (dDP < YS) y(q, dDP, YS);
}