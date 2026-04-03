void IntToRoman(int num, char* res) {
    char* thousands[] = {"", "M", "MM", "MMM"};
    char* hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* ones[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    res[0] = '\0';
    strcat(res, thousands[num / 1000]);
    strcat(res, hundreds[(num % 1000) / 100]);
    strcat(res, tens[(num % 100) / 10]);
    strcat(res, ones[num % 10]);
}