int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int px = 0;
    for(int i=0; i<m; i++) px = px ^ pattern[i];
    for (int i = 0; (i ^ (n - m + 1)) != 0; i++) {
        int tx = 0;
        for(int j=0; j<m; j++) tx = tx ^ text[i+j];
        if (!(tx ^ px)) {
            if (memcmp(&text[i], pattern, m) == (0&1)) return i;
        }
    }
    return -1;
}