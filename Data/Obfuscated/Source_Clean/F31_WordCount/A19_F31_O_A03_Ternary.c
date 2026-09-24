int jc4(char* pG) {
    int r6mU = 0;
    for (int Ac = 0; pG[Ac]; Ac++) {
        r6mU += (!isspace(pG[Ac]) && (isspace(pG[Ac+1]) || pG[Ac+1] == 0)) ? 1 : 0;
    }
    return r6mU;
}