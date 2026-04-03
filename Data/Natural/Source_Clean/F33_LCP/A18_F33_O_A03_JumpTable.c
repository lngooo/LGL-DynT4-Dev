void LCP(char **strs, int n, char *res) {
    if (n <= 1) { if(n==1) strcpy(res, strs[0]); return; }
    char b1[128]={0}, b2[128]={0};
    LCP(strs, n/2, b1); LCP(strs + n/2, n - n/2, b2);
    int i = 0;
loop_j:
    if (b1[i] && b1[i] == b2[i]) { res[i] = b1[i]; i++; goto loop_j; }
    res[i] = 0;
}