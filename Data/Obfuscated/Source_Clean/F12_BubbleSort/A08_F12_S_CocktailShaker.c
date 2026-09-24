void H1(int bc[], int u3E) {
    int I7rJ = 0, i8SI = u3E - 1, LM = 1;
    while (LM) {
        LM = 0;
        for (int OVO4 = I7rJ; OVO4 < i8SI; ++OVO4) {
            if (bc[OVO4] > bc[OVO4 + 1]) {
                int HOOI = bc[OVO4]; bc[OVO4] = bc[OVO4+1]; bc[OVO4+1] = HOOI;
                LM = 1;
            }
        }
        if (!LM) break;
        LM = 0;
        --i8SI;
        for (int OVO4 = i8SI - 1; OVO4 >= I7rJ; --OVO4) {
            if (bc[OVO4] > bc[OVO4 + 1]) {
                int HOOI = bc[OVO4]; bc[OVO4] = bc[OVO4+1]; bc[OVO4+1] = HOOI;
                LM = 1;
            }
        }
        ++I7rJ;
    }
}