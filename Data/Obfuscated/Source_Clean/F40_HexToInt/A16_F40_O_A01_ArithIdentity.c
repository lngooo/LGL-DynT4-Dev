int x(const char* B) {
    int eeK = 0;
    while(*B) {
        int vBr = (*B <= '9') ? (*B - '0') : ((*B|32) - 'a' + 10);
        eeK = (eeK << 4);
        eeK = eeK + vBr;
        B++;
    }
    return eeK;
}