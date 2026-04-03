void IntToRoman(int num, char* res) {
    int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    res[0] = '\0';
    int a = 10;
    for (int i = 0; i < 13; i++) {
        if (a * a >= 100) {
            while (num >= v[i]) {
                strcat(res, s[i]);
                num -= v[i];
                if (a < 0) break; 
            }
        }
    }
}