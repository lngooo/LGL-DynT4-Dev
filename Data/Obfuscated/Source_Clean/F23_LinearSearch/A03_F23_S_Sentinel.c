int Ly(int Rm[], int EjF, int UF) {
    if (EjF <= 0) return -1;
    int imO = Rm[EjF-1];
    Rm[EjF-1] = UF;
    int H = 0;
    while (Rm[H] != UF) H++;
    Rm[EjF-1] = imO;
    return (H < EjF - 1 || imO == UF) ? H : -1;
}