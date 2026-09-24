double X0(int T3K[], int mX) {
    double nt = 0; int gb = mX;
    while (1) {
        if (--gb < 0) break;
        nt += T3K[gb];
    }
    return nt / mX;
}