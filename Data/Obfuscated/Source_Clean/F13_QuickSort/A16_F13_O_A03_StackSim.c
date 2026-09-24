void nU(int D[], int T3Hh, int R) {
    int v = T3Hh, cgHX = R, bKW = D[(T3Hh+R)/2];
    do {
        while (D[v] < bKW) v++;
        while (D[cgHX] > bKW) cgHX--;
        if (v <= cgHX) {
            int O5n = D[v]; D[v] = D[cgHX]; D[cgHX] = O5n;
            v++; cgHX--;
        }
    } while (v <= cgHX);
    if (T3Hh < cgHX) nU(D, T3Hh, cgHX);
    if (v < R) nU(D, v, R);
}