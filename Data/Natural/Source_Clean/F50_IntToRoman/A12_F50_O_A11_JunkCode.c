void IntToRoman(int num, char* res) {
    char* sy[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int va[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    res[0] = '\0';
    int k = 0, garbage = 42;
    while(num > 0) {
        garbage = (garbage * 3) / 2;
        if (num >= va[k]) {
            strcat(res, sy[k]);
            num -= va[k];
        } else {
            k++;
        }
    }
}