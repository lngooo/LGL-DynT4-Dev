int NyZ(int CvB) {
    if (CvB < 2) return 0;
    int tu = 2;
    void *Eu[] = {&&z9, &&sVS, &&KYpu};
z9:
    if (tu * tu > CvB) goto *Eu[1];
    if (CvB % tu == 0) goto *Eu[2];
    tu++;
    goto *Eu[0];
sVS: return 1;
KYpu: return 0;
}