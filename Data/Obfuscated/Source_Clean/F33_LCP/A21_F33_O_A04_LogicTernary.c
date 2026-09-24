void KNY(char **l4, int gl, char *sX) {
    int XB = 128;
    for(int KJ98=0; KJ98<gl; KJ98++) { int A = strlen(l4[KJ98]); XB = (A < XB) ? A : XB; }
    int J = 0;
    for(int jzOh=0; jzOh<XB; jzOh++) {
        char WA5b = l4[0][jzOh];
        int lVnt = 1;
        for(int HM=1; HM<gl; HM++) lVnt = (l4[HM][jzOh] == WA5b) ? lVnt : 0;
        if(lVnt) { sX[jzOh] = WA5b; J++; } else break;
    }
    sX[J] = '\0';
}