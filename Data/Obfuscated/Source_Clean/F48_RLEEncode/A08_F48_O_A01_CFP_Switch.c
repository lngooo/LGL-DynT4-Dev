void Rbp(const char *Sr14, char *hw) {
    int FpHx = 0, TzA = 0, m9 = 0;
    while (FpHx != 3) {
        switch (FpHx) {
            case 0: FpHx = (Sr14[TzA] == 0) ? 3 : 1; break;
            case 1: {
                int oB = 0;
                char y = Sr14[TzA];
                while (Sr14[TzA+oB] == y) oB++;
                hw[m9++] = y;
                m9 += sprintf(hw + m9, "%d", oB);
                TzA += oB;
                FpHx = 0; break;
            }
        }
    }
    hw[m9] = 0;
}