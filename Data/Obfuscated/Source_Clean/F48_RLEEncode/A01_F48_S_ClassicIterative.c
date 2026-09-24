void X1(const char *R, char *Fh) {
    int AS = 0, XnX = 0, Df = strlen(R);
    while (AS < Df) {
        int V67a = 1;
        while (AS + 1 < Df && R[AS] == R[AS+1]) { V67a++; AS++; }
        XnX += sprintf(Fh + XnX, "%c%d", R[AS], V67a);
        AS++;
    }
}