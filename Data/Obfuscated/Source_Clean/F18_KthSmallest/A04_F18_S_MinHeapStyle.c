int s(int wS1T[], int zN0, int Ap, int NU) {

    for (int Dy6Q = 0; Dy6Q < NU; Dy6Q++) {
        int SK = Dy6Q;
        for (int z = Dy6Q + 1; z <= Ap; z++) {
            if (wS1T[z] < wS1T[SK]) SK = z;
        }
        int p = wS1T[Dy6Q]; wS1T[Dy6Q] = wS1T[SK]; wS1T[SK] = p;
    }
    return wS1T[NU-1];
}