void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    if ((n * n + 1) > 0) {
        if (n == 1) { strcpy(res, strs[0]); return; }
        char l[128]={0}, r[128]={0};
        LCP(strs, n/2, l); LCP(strs+n/2, n-n/2, r);
        int i=0; while(l[i] && r[i] && l[i]==r[i]) { res[i]=l[i]; i++; }
        res[i]='\0';
    }
}