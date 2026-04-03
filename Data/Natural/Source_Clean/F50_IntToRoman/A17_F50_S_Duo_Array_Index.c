void IntToRoman(int num, char* res) {
    char* c[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };
    res[0] = '\0';
    strcat(res, c[3][num/1000]);
    strcat(res, c[2][(num%1000)/100]);
    strcat(res, c[1][(num%100)/10]);
    strcat(res, c[0][num%10]);
}