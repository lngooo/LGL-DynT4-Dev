void IntToRoman(int num, char* res) {
    char* th[] = {"", "M", "MM", "MMM"};
    char* hu[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* te[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* on[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int n1 = num / 100; 
    int n2 = num % 100; 

    res[0] = '\0';
    strcat(res, th[n1 / 10]);
    strcat(res, hu[n1 % 10]);
    strcat(res, te[n2 / 10]);
    strcat(res, on[n2 % 10]);
}