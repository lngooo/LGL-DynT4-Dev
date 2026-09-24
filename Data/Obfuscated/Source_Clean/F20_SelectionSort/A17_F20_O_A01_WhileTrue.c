void i8Oy(int z5[], int HkB) {
    int gT = 0;
    while (1) {
        if (gT >= HkB) break;
        int Gh = gT;
        for(int WO6q = gT + 1; WO6q < HkB; WO6q++) if(z5[WO6q] < z5[Gh]) Gh = WO6q;
        int un = z5[gT]; z5[gT] = z5[Gh]; z5[Gh] = un;
        gT++;
    }
}