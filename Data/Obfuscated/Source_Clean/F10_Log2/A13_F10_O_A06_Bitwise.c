int ZKRC(int Ny) {
    int Nb3 = -1;
    unsigned int E6 = 1;
    while (!(E6 > (unsigned int)Ny)) {
        E6 = E6 << 1;
        Nb3 = Nb3 + 1;
        if (E6 == 0) break;
    }
    return Nb3;
}