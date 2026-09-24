int tRg(int evrO) {
    if (evrO < 0) return -1;
    long rqP = 1, mjH = 0;
    int dZ = 0;
    while (dZ != 3) {
        switch(dZ) {
            case 0: if ((rqP << 2) <= evrO) rqP <<= 1; else dZ = 1; break;
            case 1: mjH = (rqP + evrO/rqP) >> 1; dZ = 2; break;
            case 2: if (mjH < rqP) { rqP = mjH; dZ = 1; } else dZ = 3; break;
        }
    }
    return (int)rqP;
}