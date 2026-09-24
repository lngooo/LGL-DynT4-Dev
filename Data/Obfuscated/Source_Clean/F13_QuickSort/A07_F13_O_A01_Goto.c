void oVQm(int el[], int NFSu, int pBzX) {
    if (NFSu >= pBzX) goto M;
    int UuzN = el[pBzX], H = NFSu - 1, C = NFSu;
c4pH:
    if (C >= pBzX) goto VcJy;
    if (el[C] >= UuzN) goto m;
    H++;
    { int Cz4 = el[H]; el[H] = el[C]; el[C] = Cz4; }
m:
    C++; goto c4pH;
VcJy:
    { int Cz4 = el[H+1]; el[H+1] = el[pBzX]; el[pBzX] = Cz4; }
    oVQm(el, NFSu, H);
    oVQm(el, H + 2, pBzX);
M:;
}