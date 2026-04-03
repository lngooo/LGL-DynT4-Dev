static int t[256];
int AnagramCheck(char* s1, char* s2) {
    if(strlen(s1) != strlen(s2)) return 0;
    for(int k=0; k<256; k++) t[k] = 0;
    int i = 0;
    while(s1[i]) {
        t[(int)s1[i]]++;
        t[(int)s2[i]]--;
        i += 1;
    }
    int res = 1;
    for(int k=0; k<256; k++) if(t[k] != 0) res = 0;
    return res;
}