int oWB3(char* Ip, char G) {
    int IR = 0, Abv = 0;
    for (int KW = 0; Ip[KW]; KW++) {
        if (Ip[KW] == G) {
            if (KW % 2 == 0) IR++; else Abv++;
        }
    }
    return IR + Abv;
}