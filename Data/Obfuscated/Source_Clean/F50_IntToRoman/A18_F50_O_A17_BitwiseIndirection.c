void gG(int JXVn, char* v) {
    char* TQt[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };
    int oo[4] = {0, 0, 0, 0};
    int tf = JXVn;
    while(tf >= 1000) { oo[3]++; tf -= 1000; }
    while(tf >= 100) { oo[2]++; tf -= 100; }
    while(tf >= 10) { oo[1]++; tf -= 10; }
    oo[0] = tf;
    v[0] = '\0';
    for(int VxeJ=3; VxeJ>=0; VxeJ--) strcat(v, TQt[VxeJ][oo[VxeJ]]);
}