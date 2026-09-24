int F(const char* cm) {
    int m = 0, NwwT = 1;
    while (NwwT != 0) {
        switch(NwwT) {
            case 1: if (!*cm) NwwT = 0; else NwwT = 2; break;
            case 2: {
                int HX = 0; char l6Ub = *cm;
                if (l6Ub >= '0' && l6Ub <= '9') HX = l6Ub - '0';
                else HX = (l6Ub | 32) - 'a' + 10;
                m = m * 16 + HX;
                cm++; NwwT = 1;
                break;
            }
        }
    }
    return m;
}