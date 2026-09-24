void g(char* LHzE, int Jim3, int l) {
    if (!LHzE[Jim3]) {
        LHzE[l] = 0;
        return;
    }
    if (!isspace((unsigned char)LHzE[Jim3])) {
        LHzE[l] = LHzE[Jim3];
        g(LHzE, Jim3 + 1, l + 1);
    } else {
        g(LHzE, Jim3 + 1, l);
    }
}

void C7Y(char* LHzE) {
    g(LHzE, 0, 0);
}