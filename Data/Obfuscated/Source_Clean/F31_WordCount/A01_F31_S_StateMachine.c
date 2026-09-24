int iasD(char* RWzJ) {
    int HD9P = 0, YMK = 0; 
    while (*RWzJ) {
        if (isspace(*RWzJ)) YMK = 0;
        else if (YMK == 0) {
            YMK = 1;
            HD9P++;
        }
        RWzJ++;
    }
    return HD9P;
}