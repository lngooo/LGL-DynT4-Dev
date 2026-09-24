int n(char* J, char ZBgR) {
    int Xm = 0;
    while (*J) {
        if (*J == ZBgR) Xm++;
        J++;
    }
    return Xm;
}