int EofZ(const char* iC) {
    int RWbD = 0, SK9 = 0, PIAw = strlen(iC);
    while (SK9 < PIAw) {
        int O7 = (iC[SK9] <= '9') ? (iC[SK9]-'0') : ((iC[SK9]|32)-'a'+10);
        RWbD = (RWbD << 4) | O7;
        SK9 += 1;
    }
    return RWbD;
}