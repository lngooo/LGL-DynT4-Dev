void ARk(int N[], int lbT, int t) {
    if (lbT == 0) return;
    t = t % lbT;
    if (t == 0) return;
    int gujA = 0;
    for (int qy8 = 0; gujA < lbT; qy8++) {
        int d = qy8;
        int pW = N[qy8];
        do {
            int FG = (d - t + lbT) % lbT;
            int hrdu = N[FG];
            N[FG] = pW;
            pW = hrdu;
            d = FG;
            gujA++;
        } while (qy8 != d);
    }
}