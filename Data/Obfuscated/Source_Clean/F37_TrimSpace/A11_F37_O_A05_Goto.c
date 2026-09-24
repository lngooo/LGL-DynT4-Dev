void uN(char* zO) {
    char *qIBN = zO, *SL = zO;
SNJC:
    if (!*qIBN) goto GyK;
    if (*qIBN == 32 || (*qIBN >= 9 && *qIBN <= 13)) goto S53;
    *SL = *qIBN;
    SL++;
S53:
    qIBN++;
    goto SNJC;
GyK:
    *SL = '\0';
}