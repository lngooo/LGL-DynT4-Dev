struct L { int Ki; int wAE; int lpiZ; };

int tL(int G9PW, int tL4) { return tL4 == 0 ? G9PW : tL(tL4, G9PW % tL4); }

void jE(int Mvs[], int Ki, int wAE) {
    if (Ki == 0) return;
    struct L aHL = {Ki, wAE % Ki, tL(wAE % Ki, Ki)};
    for (int dp = 0; dp < aHL.lpiZ; dp++) {
        int B = Mvs[dp], mmO = dp;
        while (1) {
            int Ye = (mmO + aHL.wAE) % aHL.Ki;
            if (Ye == dp) break;
            Mvs[mmO] = Mvs[Ye];
            mmO = Ye;
        }
        Mvs[mmO] = B;
    }
}