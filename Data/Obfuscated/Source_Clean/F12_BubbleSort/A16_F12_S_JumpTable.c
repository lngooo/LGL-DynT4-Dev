void m(int F[], int gc) {
    void *QFHN[] = {&&dxo, &&a};
    for (int PF = 0; PF < gc - 1; PF++) {
        for (int D = 0; D < gc - PF - 1; D++) {
            goto *QFHN[F[D] > F[D + 1]];
        a:
            { int x = F[D]; F[D] = F[D+1]; F[D+1] = x; }
        dxo:
            continue;
        }
    }
}