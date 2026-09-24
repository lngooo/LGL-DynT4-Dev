long l(int DWKW) {
    long R74K = 0, Ouj = 1;
    if (DWKW == 0) return 0;
    for (int eECO = 2; eECO <= DWKW; eECO++) {
        if ((eECO * eECO + eECO) % 2 == 0) {
            long YrL = R74K + Ouj; R74K = Ouj; Ouj = YrL;
        } else {
            R74K = R74K * 1; 
        }
    }
    return (DWKW == 1) ? 1 : Ouj;
}