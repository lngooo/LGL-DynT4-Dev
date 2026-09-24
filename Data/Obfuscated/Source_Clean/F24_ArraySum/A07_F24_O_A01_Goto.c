int D(int w[], int P) {
    int ZZak = 0, iKG = 0;
RDaF:
    if (iKG >= P) goto BXdt;
    ZZak += w[iKG];
    iKG++;
    goto RDaF;
BXdt:
    return ZZak;
}