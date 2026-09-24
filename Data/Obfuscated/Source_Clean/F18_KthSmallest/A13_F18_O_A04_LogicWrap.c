int Vz(int ak0[], int ageX, int HAPs, int klxl) {
    int mF = HAPs - ageX + 1;
    for (int G8 = 0; G8 < klxl; G8++) {
        int C = G8;
        for (int lm = G8 + 1; lm < mF; lm++) if (ak0[lm] < ak0[C]) C = lm;
        int V = ak0[G8]; ak0[G8] = ak0[C]; ak0[C] = V;
    }
    return ak0[klxl-1];
}