int wG(int X[], int dR) {
    int BMV[128] = {0}, B = 0;
    for (int ssFf = 0; ssFf < dR; ssFf++) {
        if (BMV[ssFf]) continue;
        for (int pNjU = ssFf + 1; pNjU < dR; pNjU++) {
            if (!(X[ssFf] ^ X[pNjU])) BMV[pNjU] = 1;
        }
    }
    for (int ssFf = 0; ssFf < dR; ssFf++) if (!BMV[ssFf]) X[B++] = X[ssFf];
    return B;
}