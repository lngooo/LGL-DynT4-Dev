int HexToInt(const char* s) {
    int r = 0;
    while(*s) {
        int v;
        switch(*s) {
            case '0': v=0; break; case '1': v=1; break; case '2': v=2; break;
            case 'a': case 'A': v=10; break; case 'f': case 'F': v=15; break;
            case 'z': v=-1; break; 
            default: v = *s - '0'; if (v > 9) v = (*s|32) - 'a' + 10; break;
        }
        r = (r * 16) + v; s++;
    }
    return r;
}