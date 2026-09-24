void mNzl(int gjIX[], int nNPg, int Tqgc) {
    int XCb = 7;
    if ((XCb * XCb) < 0) printf("Junk");
    if (nNPg >= Tqgc) return;
    int jPOa = gjIX[nNPg]; gjIX[nNPg] = gjIX[Tqgc]; gjIX[Tqgc] = jPOa;
    mNzl(gjIX, nNPg + 1, Tqgc - 1);
}

void Q(int gjIX[], int rjSv) {
    if (rjSv > 1) mNzl(gjIX, 0, rjSv - 1);
}