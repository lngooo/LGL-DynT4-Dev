void a2(int jmzZ, char* d) {
    char* K[] = {"", "M", "MM", "MMM"};
    char* Af[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* ziag[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* uw5u[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    d[0] = '\0';
    strcat(d, K[jmzZ / 1000]);
    strcat(d, Af[(jmzZ % 1000) / 100]);
    strcat(d, ziag[(jmzZ % 100) / 10]);
    strcat(d, uw5u[jmzZ % 10]);
}