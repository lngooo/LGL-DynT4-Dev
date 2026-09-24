void E8Ic(int z3R[], int Dh) {
    int uSaa = 0, yL = 0, u = 0;
    while (u != 4) {
        switch (u) {
            case 0: if (uSaa < Dh - 1) { yL = 0; u = 1; } else u = 4; break;
            case 1: if (yL < Dh - uSaa - 1) u = 2; else { uSaa++; u = 0; } break;
            case 2: 
                if (z3R[yL] > z3R[yL + 1]) {
                    int N3q = z3R[yL]; z3R[yL] = z3R[yL+1]; z3R[yL+1] = N3q;
                }
                yL++; u = 1; break;
        }
    }
}