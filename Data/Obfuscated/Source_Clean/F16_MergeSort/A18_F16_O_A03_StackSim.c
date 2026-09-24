void A18R(int YEZ[], int Nn, int SVf) {
    if (Nn >= SVf) return;
    int ilmk = Nn + (SVf - Nn) / 2;
    A18R(YEZ, Nn, ilmk);
    A18R(YEZ, ilmk + 1, SVf);
    int gYA8[256], tpnJ = Nn, b = ilmk + 1, qwR = Nn;
    while (tpnJ <= ilmk || b <= SVf) {
        if (tpnJ <= ilmk && (b > SVf || YEZ[tpnJ] <= YEZ[b])) gYA8[qwR++] = YEZ[tpnJ++];
        else gYA8[qwR++] = YEZ[b++];
    }
    for (int l0 = Nn; l0 <= SVf; l0++) YEZ[l0] = gYA8[l0];
}