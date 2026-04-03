int AnagramCheck(char* s1, char* s2) {
    int n = strlen(s1);
    if (n != (int)strlen(s2)) return 0;
    char temp[256]; strcpy(temp, s2);
    for(char* p1 = s1; *p1; p1++) {
        int f = 0;
        for(char* p2 = temp; p2 < temp + n; p2++) {
            if(*p1 == *p2) { *p2 = 0; f = 1; break; }
        }
        if(!f) return 0;
    }
    return 1;
}