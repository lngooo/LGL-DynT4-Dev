int Hf4(int k8[], int Tj1, int JCFS) {
    int RhJ = 0;
    for (; RhJ <= Tj1 - 2; RhJ += 2) {
        if (k8[RhJ] == JCFS) return RhJ;
        if (k8[RhJ+1] == JCFS) return RhJ + 1;
    }
    for (; RhJ < Tj1; RhJ++) if (k8[RhJ] == JCFS) return RhJ;
    return -1;
}