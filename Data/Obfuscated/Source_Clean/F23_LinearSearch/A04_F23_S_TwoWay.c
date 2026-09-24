int NyO(int Ow[], int HQ9l, int o4s) {
    int FYOz = 0, IEs = HQ9l - 1;
    while (FYOz <= IEs) {
        if (Ow[FYOz] == o4s) return FYOz;
        if (Ow[IEs] == o4s) return IEs;
        FYOz++; IEs--;
    }
    return -1;
}