void Qk8(int Tehj[], int Ym, int Iy) {
    if (Ym == 0) return;
    Iy %= Ym;
    int uMB = 0;
    while(1) {
        if(uMB >= Iy) break;
        int cW = Tehj[0], Is = 0;
        while(1) {
            if(Is >= Ym - 1) break;
            Tehj[Is] = Tehj[Is+1]; Is++;
        }
        Tehj[Ym-1] = cW; uMB++;
    }
}