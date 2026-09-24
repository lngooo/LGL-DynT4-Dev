int sCZ(int iA) {
    if (iA < 2) return 0;
    int SJ3 = sCZ(iA >> 1);
    return ++SJ3;
}