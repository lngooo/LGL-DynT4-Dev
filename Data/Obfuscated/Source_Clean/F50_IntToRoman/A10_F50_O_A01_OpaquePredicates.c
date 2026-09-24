void A(int pi, char* UjoP) {
    int hCNG[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* j[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    UjoP[0] = '\0';
    int oE = 10;
    for (int c = 0; c < 13; c++) {
        if (oE * oE >= 100) {
            while (pi >= hCNG[c]) {
                strcat(UjoP, j[c]);
                pi -= hCNG[c];
                if (oE < 0) break; 
            }
        }
    }
}