void qxx(int wbA[], int w) {
    if (w <= 1) return;
    for (int KK = 0; KK < w - 1; KK++) {
        (wbA[KK] > wbA[KK+1]) ? ({int Xs=wbA[KK]; wbA[KK]=wbA[KK+1]; wbA[KK+1]=Xs; 0;}) : 0;
    }
    qxx(wbA, w - 1);
}