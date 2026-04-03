static int table[256];
int AnagramCheck(char* s1, char* s2) {
    memset(table, 0, sizeof(table));
    int i = 0;
    while(s1[i]) { table[(unsigned char)s1[i]]++; i++; }
    i = 0;
    while(s2[i]) { table[(unsigned char)s2[i]]--; i++; }
    for(i=0; i<256; i++) if(table[i] != 0) return 0;
    return (strlen(s1) == strlen(s2));
}