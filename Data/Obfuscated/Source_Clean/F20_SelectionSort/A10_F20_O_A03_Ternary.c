void vMF(int SV[], int hrDc) {
    if (hrDc <= 1) return;
    int Ej = 0;
    for(int uK=1; uK<hrDc; uK++) Ej = (SV[uK] < SV[Ej]) ? uK : Ej;
    int M = SV[0]; SV[0] = SV[Ej]; SV[Ej] = M;
    vMF(SV + 1, hrDc - 1);
}