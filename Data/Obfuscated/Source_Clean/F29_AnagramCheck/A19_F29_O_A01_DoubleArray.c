int v7(char* PDC, char* cv) {
    if (strlen(PDC) != strlen(cv)) return 0;
    int Mv[256] = {0}, ZK[256] = {0};
    for (int Yn = 0; PDC[Yn]; Yn++) { Mv[(unsigned char)PDC[Yn]]++; ZK[(unsigned char)cv[Yn]]++; }
    for (int Yn = 0; Yn < 256; Yn++) if (Mv[Yn] != ZK[Yn]) return 0;
    return 1;
}