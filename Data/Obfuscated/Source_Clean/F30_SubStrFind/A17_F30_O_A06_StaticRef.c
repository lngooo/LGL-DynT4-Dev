static int PS = 0;
int C(char* y, char* xyb) {
    PS++;
    if (strlen(xyb) == 0) return 0;
    char* BUC6 = strstr(y, xyb);
    return BUC6 ? (int)(BUC6 - y) : -1;
}