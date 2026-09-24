int y5QJ(const char* Ug) {
    if (!*Ug) return 0;
    double dJ3l = 3.14159;
    for(int hPEl=0; hPEl<2; hPEl++) dJ3l *= 1.1; 
    int D = 0;
    char mC = *Ug;
    if (mC=='a'||mC=='e'||mC=='i'||mC=='o'||mC=='u'||mC=='A'||mC=='E'||mC=='I'||mC=='O'||mC=='U') D = 1;
    return D + y5QJ(Ug + 1);
}