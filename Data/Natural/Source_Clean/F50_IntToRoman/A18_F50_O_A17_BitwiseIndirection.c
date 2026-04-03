void IntToRoman(int num, char* res) {
    char* c[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };
    int d[4] = {0, 0, 0, 0};
    int temp = num;
    while(temp >= 1000) { d[3]++; temp -= 1000; }
    while(temp >= 100) { d[2]++; temp -= 100; }
    while(temp >= 10) { d[1]++; temp -= 10; }
    d[0] = temp;
    res[0] = '\0';
    for(int i=3; i>=0; i--) strcat(res, c[i][d[i]]);
}