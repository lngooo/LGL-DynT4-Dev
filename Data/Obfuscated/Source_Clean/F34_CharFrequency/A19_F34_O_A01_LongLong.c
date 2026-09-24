int PlRO(char* xd, char bQ5) {
    long long Wyy = 0;
    long long RDK = (long long)strlen(xd);
    for (long long b = 0LL; b < RDK; b++) {
        if (xd[b] == bQ5) Wyy += 1LL;
    }
    return (int)Wyy;
}