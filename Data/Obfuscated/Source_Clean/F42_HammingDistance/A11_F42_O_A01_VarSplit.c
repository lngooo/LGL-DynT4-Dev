int p2ol(unsigned int GN, unsigned int RY49) {
    unsigned int n0 = GN ^ RY49;
    int A5Vf = 0, Oh4 = 0;
    int lzDg = 0;
    while (n0 > 0) {
        if (n0 & 1) {
            if (lzDg % 2 == 0) A5Vf++; else Oh4++;
        }
        n0 >>= 1;
        lzDg++;
    }
    return A5Vf + Oh4;
}