int SubStrFind(char* text, char* pattern) {
    char* cur = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
    while (1) {
        cur = strchr(cur, pattern[0]);
        if (!cur) break;
        int ok = 1;
        for(int k=0; k<m; k++) if(cur[k] != pattern[k]) ok = 0;
        if (ok) return (int)(cur - text);
        cur++;
    }
    return -1;
}