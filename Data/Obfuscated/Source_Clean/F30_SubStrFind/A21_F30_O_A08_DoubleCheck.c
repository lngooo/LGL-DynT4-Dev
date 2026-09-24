int z(char* kd, char* j2ip) {
    int KYr = strlen(kd), pDlT = strlen(j2ip);
    if (pDlT == 0) return 0;
    for (int T = 0; T <= KYr - pDlT; T++) {
        if (kd[T] == j2ip[0]) {
            if (kd[T+pDlT-1] == j2ip[pDlT-1]) {
                if (strncmp(kd + T, j2ip, pDlT) == 0) return T;
            }
        }
    }
    return -1;
}