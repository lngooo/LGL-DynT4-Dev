int T(const char *pLFo) {
    int QrgX = 0;
JM1K:
    if (!*pLFo) goto MH37;
    goto cMgL;
cMgL:
    QrgX++; pLFo++;
    goto JM1K;
MH37:
    return QrgX;
}