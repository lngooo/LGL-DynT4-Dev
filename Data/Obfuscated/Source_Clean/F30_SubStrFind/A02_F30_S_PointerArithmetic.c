int ZyWI(char* B, char* RFb) {
    char* c9FW = B;
    int E = strlen(RFb);
    if (E == 0) return 0;
    while (*c9FW) {
        if (strncmp(c9FW, RFb, E) == 0) return (int)(c9FW - B);
        c9FW++;
    }
    return -1;
}