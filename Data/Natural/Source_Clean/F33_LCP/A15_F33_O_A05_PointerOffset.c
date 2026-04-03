void LCP(char **strs, int n, char *res) {
    char *base = *strs;
    int k = 0;
    while(*(base + k)) {
        for(int i=1; i<n; i++) {
            if(*(strs[i] + k) != *(base + k)) { *(res + k) = 0; return; }
        }
        *(res + k) = *(base + k);
        k++;
    }
    *(res + k) = 0;
}