void xlF(int nASW[], int x2z) {
    int ClK = 0, KR;
gU:
    if (ClK >= x2z - 1) goto ZpJ;
    KR = 0;
ymjZ:
    if (KR >= x2z - ClK - 1) { ClK++; goto gU; }
    if (nASW[KR] > nASW[KR + 1]) {
        int EZ = nASW[KR]; nASW[KR] = nASW[KR+1]; nASW[KR+1] = EZ;
    }
    KR++;
    goto ymjZ;
ZpJ:
    return;
}