void ngt9(char **fD3, int y, char *Oyk) {
    int WxW = 0;
    while (1) {
        char clz = *(fD3[0] + WxW);
        if (!(clz ^ 0)) break;
        int UR = 1, vIR = 1;
        while (UR < y) {
            if (*(fD3[UR] + WxW) ^ clz) { vIR = 0; break; }
            UR++;
        }
        if (vIR) { *(Oyk + WxW) = clz; WxW++; } else break;
    }
    *(Oyk + WxW) = '\0';
}