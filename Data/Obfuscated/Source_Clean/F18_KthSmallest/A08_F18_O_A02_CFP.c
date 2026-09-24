int q9(int M[], int OSy, int vl, int QEe) {
    int bM6 = 0;
    while (bM6 != 2) {
        switch (bM6) {
            case 0: if (OSy <= vl) bM6 = 1; else bM6 = 2; break;
            case 1: {
                int yGOV = M[vl], GL = OSy;
                for (int o = OSy; o < vl; o++) if (M[o] <= yGOV) { int N=M[GL]; M[GL]=M[o]; M[o]=N; GL++; }
                int N=M[GL]; M[GL]=M[vl]; M[vl]=N;
                if (GL == QEe - 1) return M[GL];
                if (GL > QEe - 1) vl = GL - 1; else OSy = GL + 1;
                bM6 = 0; break;
            }
        }
    }
    return -1;
}