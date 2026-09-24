void n8iN(int EnW, char* GQn3) {
    char* w[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };
    GQn3[0] = '\0';
    strcat(GQn3, w[3][EnW/1000]);
    strcat(GQn3, w[2][(EnW%1000)/100]);
    strcat(GQn3, w[1][(EnW%100)/10]);
    strcat(GQn3, w[0][EnW%10]);
}