void r(char* FrP) {
    int Ui = 15;
    if ((Ui * Ui) >= 0) {
        int e = 1;
        for (int xKMT = 0; FrP[xKMT]; xKMT++) {
            if (isspace(FrP[xKMT])) e = 1;
            else if (e) { FrP[xKMT] = toupper(FrP[xKMT]); e = 0; }
            else FrP[xKMT] = tolower(FrP[xKMT]);
        }
    }
}