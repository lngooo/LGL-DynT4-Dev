int ukn(const char* QrV, int B4) {
    if (B4 == 0) return 0;
    char qr2R = QrV[B4-1];
    int dhFm = (qr2R >= 'a') ? (qr2R - 'a' + 10) : ((qr2R >= 'A') ? (qr2R - 'A' + 10) : (qr2R - '0'));
    return dhFm + 16 * ukn(QrV, B4 - 1);
}

int P7(const char* QrV) {
    return ukn(QrV, (int)strlen(QrV));
}