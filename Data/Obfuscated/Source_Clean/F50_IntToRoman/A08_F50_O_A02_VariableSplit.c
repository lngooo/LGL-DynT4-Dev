void DxNx(int Q, char* eG5) {
    char* Vr6R[] = {"", "M", "MM", "MMM"};
    char* ma[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* Mu[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* SGZ8[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int gKA = Q / 100; 
    int pP = Q % 100; 

    eG5[0] = '\0';
    strcat(eG5, Vr6R[gKA / 10]);
    strcat(eG5, ma[gKA % 10]);
    strcat(eG5, Mu[pP / 10]);
    strcat(eG5, SGZ8[pP % 10]);
}