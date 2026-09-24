void BInQ(int Ei[], int Jy) {
    int Ajs = 0, ia = Jy - 1;
    while (Ajs < ia) {
        int P = Ei[Ajs];
        Ei[Ajs] = Ei[ia];
        Ei[ia] = P;
        Ajs++;
        ia--;
    }
}