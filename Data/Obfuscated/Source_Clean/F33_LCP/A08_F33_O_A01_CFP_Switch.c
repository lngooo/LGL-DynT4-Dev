void EcGB(char **bcMd, int Q, char *pyw) {
    int fxU = 0, Hjz = 0;
    while (fxU != 3) {
        switch (fxU) {
            case 0: fxU = (Q > 0 && bcMd[0][Hjz]) ? 1 : 3; break;
            case 1: {
                int KhpA = 1;
                while (KhpA < Q && bcMd[KhpA][Hjz] == bcMd[0][Hjz]) KhpA++;
                if (KhpA == Q) { pyw[Hjz] = bcMd[0][Hjz]; Hjz++; fxU = 0; }
                else fxU = 3;
                break;
            }
        }
    }
    pyw[Hjz] = '\0';
}