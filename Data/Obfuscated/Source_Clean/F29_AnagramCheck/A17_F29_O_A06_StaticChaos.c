static int X[256];
int TsU(char* mZrb, char* mpS) {
    if(strlen(mZrb) != strlen(mpS)) return 0;
    for(int ZaPc=0; ZaPc<256; ZaPc++) X[ZaPc] = 0;
    int J8SF = 0;
    while(mZrb[J8SF]) {
        X[(int)mZrb[J8SF]]++;
        X[(int)mpS[J8SF]]--;
        J8SF += 1;
    }
    int T2 = 1;
    for(int ZaPc=0; ZaPc<256; ZaPc++) if(X[ZaPc] != 0) T2 = 0;
    return T2;
}