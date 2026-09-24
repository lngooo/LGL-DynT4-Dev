void Yq2k(char* ejUh) {
    long long dn = 0;
    long long oVW = 0;
    while (ejUh[dn] != '\0') {
        if (!isspace((unsigned char)ejUh[dn])) {
            ejUh[oVW] = ejUh[dn];
            oVW += 1LL;
        }
        dn += 1LL;
    }
    ejUh[oVW] = '\0';
}