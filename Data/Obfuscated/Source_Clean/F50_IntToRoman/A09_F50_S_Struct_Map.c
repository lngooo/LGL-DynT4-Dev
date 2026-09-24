typedef struct { int DA; char s7Hn[3]; } C;

void Sa(int zl1L, char* Q9) {
    C x[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    Q9[0] = '\0';
    for(int Z=0; Z<13; Z++) {
        int D = zl1L / x[Z].DA;
        for(int sX=0; sX<D; sX++) strcat(Q9, x[Z].s7Hn);
        zl1L %= x[Z].DA;
    }
}