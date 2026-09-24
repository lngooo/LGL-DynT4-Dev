void NtA(int kgD[], int F, int aO) {
    if (F <= 1) return;
    aO %= F; if(aO==0) return;
    int So = 0, NnpE = 0, ZVy = 0, zl, x;
    while(So < F) {
        switch(ZVy) {
            case 0: zl = NnpE; x = kgD[NnpE]; ZVy = 1; break;
            case 1: {
                int e = (zl - aO + F) % F;
                int bJh = kgD[e]; kgD[e] = x; x = bJh; zl = e; So++;
                if(zl == NnpE) { NnpE++; ZVy = 0; } else ZVy = 1;
                break;
            }
        }
    }
}