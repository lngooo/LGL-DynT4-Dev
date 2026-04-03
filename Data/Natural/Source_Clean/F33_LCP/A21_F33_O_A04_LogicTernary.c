void LCP(char **strs, int n, char *res) {
    int min_s = 128;
    for(int i=0; i<n; i++) { int l = strlen(strs[i]); min_s = (l < min_s) ? l : min_s; }
    int matched = 0;
    for(int j=0; j<min_s; j++) {
        char c = strs[0][j];
        int all = 1;
        for(int k=1; k<n; k++) all = (strs[k][j] == c) ? all : 0;
        if(all) { res[j] = c; matched++; } else break;
    }
    res[matched] = '\0';
}