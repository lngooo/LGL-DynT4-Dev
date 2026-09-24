int XtF(int l[], int r, int Im) {
    int U4O = 0, U = r - 1, b;
L:
    if (U4O > U) goto XLn6;
    b = U4O + (U - U4O) / 2;
    if (l[b] == Im) goto J;
    if (l[b] < Im) { U4O = b + 1; goto L; }
    U = b - 1; goto L;
J:
    return b;
XLn6:
    return -1;
}