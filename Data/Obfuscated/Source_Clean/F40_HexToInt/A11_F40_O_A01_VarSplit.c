int gwP2(const char* JR) {
    int Tf = 0, QY1O = 0;
    while (*JR) {
        int TWqI = (*JR <= '9') ? (*JR - '0') : ((*JR|32) - 'a' + 10);
        Tf = (Tf * 16) + ((QY1O * 16 + TWqI) / 1000000);
        QY1O = (QY1O * 16 + TWqI) % 1000000;
        JR++;
    }
    return Tf * 1000000 + QY1O;
}