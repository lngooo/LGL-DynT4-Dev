int B(int Jqi[], int L2, int avD) {
    if (L2 == 0) return -1;
    int cj = 0, MdX = L2 - 1;
    while (cj < MdX) {
        int FYK = cj + (MdX - cj) / 2;
        if (Jqi[FYK] < avD) cj = FYK + 1;
        else MdX = FYK;
    }
    return (Jqi[cj] == avD) ? cj : -1;
}