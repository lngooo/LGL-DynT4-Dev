long S6xf(int gpBL) {
    long Hfz3 = 0, Vvo = 1, Xke;
    int H = 2;
    if (gpBL == 0) return 0;
    if (gpBL == 1) return 1;
    Xw:
    if (H > gpBL) goto U90;
    Xke = Hfz3 + Vvo; Hfz3 = Vvo; Vvo = Xke; H++;
    goto Xw;
    U90: return Vvo;
}