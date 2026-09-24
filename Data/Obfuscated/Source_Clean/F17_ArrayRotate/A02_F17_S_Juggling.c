int Ty(int gu, int Xx) {
    return Xx == 0 ? gu : Ty(Xx, gu % Xx);
}

void gjTB(int ffdB[], int En, int exRH) {
    if (En == 0) return;
    exRH = exRH % En;
    int LJHX = Ty(exRH, En);
    for (int qLFO = 0; qLFO < LJHX; qLFO++) {
        int CS78 = ffdB[qLFO];
        int UA0k = qLFO;
        while (1) {
            int Gi = (UA0k + exRH) % En;
            if (Gi == qLFO) break;
            ffdB[UA0k] = ffdB[Gi];
            UA0k = Gi;
        }
        ffdB[UA0k] = CS78;
    }
}