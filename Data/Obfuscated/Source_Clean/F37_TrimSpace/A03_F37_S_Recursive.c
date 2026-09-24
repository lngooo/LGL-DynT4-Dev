void J5Gj(char* UWzL, char* QOdr) {
    if (!*UWzL) {
        *QOdr = '\0';
        return;
    }
    if (!isspace((unsigned char)*UWzL)) {
        *QOdr = *UWzL;
        J5Gj(UWzL + 1, QOdr + 1);
    } else {
        J5Gj(UWzL + 1, QOdr);
    }
}

void L(char* oTh) {
    J5Gj(oTh, oTh);
}