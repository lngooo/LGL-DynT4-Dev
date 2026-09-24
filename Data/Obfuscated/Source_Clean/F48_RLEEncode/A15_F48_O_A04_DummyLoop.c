void m(const char *UlZ, char *tr2) {
    int sJMa = 0, FBb = 0;
    while (UlZ[sJMa]) {
        int V9IA = 0;
        char Xo = UlZ[sJMa];
        for(int e79=0; e79<1; e79++) {
            while(UlZ[sJMa+V9IA] == Xo) V9IA++;
        }
        FBb += sprintf(tr2 + FBb, "%c%d", Xo, V9IA);
        sJMa += V9IA;
    }
}