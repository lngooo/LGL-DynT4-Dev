struct yT { int Vy; int xgf; };

int t(int xWrg) {
    struct yT fl = {xWrg, 1};
    if (fl.Vy < 2) return 0;
    for (int CJJG = 2; CJJG * CJJG <= fl.Vy; CJJG++) {
        if (fl.Vy % CJJG == 0) { fl.xgf = 0; break; }
    }
    return fl.xgf;
}