int HexToInt(const char* s) {
    static int m[256];
    for(int i=0; i<10; i++) m['0'+i]=i;
    for(int i=0; i<6; i++) { m['a'+i]=10+i; m['A'+i]=10+i; }
    int res = 0;
    const int* p = m;
    while(*s) {
        res = (res << 4) + *(p + (unsigned char)*s);
        s++;
    }
    return res;
}