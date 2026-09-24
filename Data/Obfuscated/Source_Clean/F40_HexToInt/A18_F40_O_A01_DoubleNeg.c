int j(const char* e8m) {
    int WT = 0;
    while (!!*e8m) {
        int NzDI = 0;
        if (!(*e8m < '0' || *e8m > '9')) NzDI = *e8m - '0';
        else NzDI = (*e8m | 32) - 'a' + 10;
        WT = (WT * 16) + NzDI;
        e8m++;
    }
    return WT;
}