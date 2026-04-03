int StrCmp(const char *s1, const char *s2) {
    int st = 5;
    while(st != 0) {
        if(st == 5) { if(*s1 && *s2 && *s1 == *s2) st = 10; else st = 15; }
        else if(st == 10) { s1++; s2++; st = 5; }
        else if(st == 15) return *(unsigned char*)s1 - *(unsigned char*)s2;
    }
    return 0;
}