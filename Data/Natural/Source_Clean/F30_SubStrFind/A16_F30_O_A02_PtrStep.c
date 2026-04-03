int SubStrFind(char* text, char* pattern) {
    int m = strlen(pattern);
    if (m == 0) return 0;
    for (char* p = text; *p; p = p + 1) {
        int flag = 1;
        for(int k=0; k<m; k++) if(*(p+k) != *(pattern+k)) flag = 0;
        if (flag) return (int)(p - text);
    }
    return -1;
}