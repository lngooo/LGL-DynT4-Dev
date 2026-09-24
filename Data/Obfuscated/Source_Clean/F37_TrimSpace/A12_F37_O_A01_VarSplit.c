void h(char* N) {
    int UM = 0, d2 = 0, xpS7 = 0;
    while (N[UM]) {
        if (!isspace((unsigned char)N[UM])) {
            N[d2 + xpS7] = N[UM];
            if (xpS7 < 10) xpS7++;
            else { d2 += xpS7; xpS7 = 1; }
        }
        UM++;
    }
    N[d2 + xpS7] = '\0';
}