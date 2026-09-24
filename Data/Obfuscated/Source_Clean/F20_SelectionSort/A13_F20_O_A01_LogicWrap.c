void Y(int qHUa[], int iOCO) {
    int c = 0;
    while (c < iOCO) {
        int Vm = c;
        for (int SIXk = c + 1; SIXk < iOCO; SIXk++) {
            int nwn8 = (qHUa[SIXk] < qHUa[Vm]);
            switch(nwn8) { case 1: Vm = SIXk; break; default: break; }
        }
        int RK = qHUa[c]; qHUa[c] = qHUa[Vm]; qHUa[Vm] = RK;
        c++;
    }
}