void g(int Iy[], int mH) {
    for (int KO = 0; KO < mH - 1; KO++) {
        for (int JV = 0; JV < mH - KO - 1; JV++) {
            switch (Iy[JV] > Iy[JV + 1]) {
                case 1: { int VgXO = Iy[JV]; Iy[JV] = Iy[JV+1]; Iy[JV+1] = VgXO; break; }
                default: break;
            }
        }
    }
}