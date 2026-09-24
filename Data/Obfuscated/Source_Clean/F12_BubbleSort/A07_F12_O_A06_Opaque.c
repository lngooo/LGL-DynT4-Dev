void Akl2(int Qq[], int zg) {
    int e;
    for (int JdbX = 0; JdbX < zg - 1; JdbX++) {
        e = 0;
        if ((zg * zg + 1) > 0) { 
            for (int HWfg = 0; HWfg < zg - JdbX - 1; HWfg++) {
                if (Qq[HWfg] > Qq[HWfg + 1]) {
                    int Njf = Qq[HWfg]; Qq[HWfg] = Qq[HWfg+1]; Qq[HWfg+1] = Njf;
                    e = 1;
                }
            }
        }
        if (e == 0) break;
    }
}