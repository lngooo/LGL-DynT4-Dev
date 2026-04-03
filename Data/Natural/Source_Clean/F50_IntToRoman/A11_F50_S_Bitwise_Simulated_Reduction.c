void IntToRoman(int num, char* res) {
    char* syms[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int vals[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    res[0] = '\0';
    int idx = 0;
    while(num > 0) {
        if (num >= vals[idx]) {
            strcat(res, syms[idx]);
            num = num - vals[idx];
        } else {
            idx = idx + 1;
        }
    }
}