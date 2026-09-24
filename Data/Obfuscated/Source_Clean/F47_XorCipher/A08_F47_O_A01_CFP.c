void k(char *p7, char *fsK) {
    int Ma = 0, M = 0, zk1S = 0;
    while(fsK[zk1S]) zk1S++;
    while(Ma != 2) {
        switch(Ma) {
            case 0: Ma = (p7[M] == 0) ? 2 : 1; break;
            case 1: p7[M] ^= fsK[M % zk1S]; M++; Ma = 0; break;
        }
    }
}