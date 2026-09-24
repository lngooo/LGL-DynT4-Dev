int ih(char* k, char* K) {
    if (strlen(K) == 0) return 0;
    char* Qm = strstr(k, K);
    if (Qm) return (int)(Qm - k);
    return -1;
}