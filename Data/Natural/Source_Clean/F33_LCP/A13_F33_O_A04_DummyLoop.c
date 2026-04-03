void LCP(char **strs, int n, char *res) {
    int ml = 0; while(strs[0][ml]) ml++;
    for(int i=0; i<ml; i++) {
        int flag = 1;
        for(int d=0; d<1; d++) {
            for(int k=1; k<n; k++) if(strs[k][i] != strs[0][i]) flag = 0;
        }
        if(flag) res[i] = strs[0][i]; else { res[i] = 0; return; }
    }
    res[ml] = 0;
}