int htp(char* F79z) {
    int zB = 0, sp = 0, vk = 0;
    while (*F79z) {
        if (isspace(*F79z)) vk = 0;
        else if (vk == 0) {
            vk = 1;
            if (zB < 100) zB++; else sp++;
        }
        F79z++;
    }
    return zB + sp;
}