int HexToInt(const char* s) {
    int res = 0, state = 1;
    while (state != 0) {
        switch(state) {
            case 1: if (!*s) state = 0; else state = 2; break;
            case 2: {
                int v = 0; char c = *s;
                if (c >= '0' && c <= '9') v = c - '0';
                else v = (c | 32) - 'a' + 10;
                res = res * 16 + v;
                s++; state = 1;
                break;
            }
        }
    }
    return res;
}