int gN(int pd) {
    if (pd < 0) return -1;
    long Oo = pd;
    long g = (Oo + 1) >> 1;
    for (; g < Oo ;) {
        Oo = g;
        long vTEg = (Oo + pd / Oo) / 2;
        g = vTEg;
    }
    return (int)Oo;
}