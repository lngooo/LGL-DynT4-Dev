int Gu(char* yWO, char* bGWs) {
    if (strlen(yWO) != strlen(bGWs)) return 0;
    int bQTS[256] = {0};
    int Jecm = 0, n = 0;
    while(yWO[Jecm]) {
        bQTS[(unsigned char)yWO[Jecm]]++;
        bQTS[(unsigned char)bGWs[n]]--;
        Jecm++; n++;
    }
    for (int LF = 0; LF < 256; LF++) if (bQTS[LF] != 0) return 0;
    return 1;
}