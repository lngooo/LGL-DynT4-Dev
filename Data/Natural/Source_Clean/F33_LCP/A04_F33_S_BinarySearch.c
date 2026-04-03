void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    int min_len = 128;
    for(int i=0; i<n; i++) {
        int cur = strlen(strs[i]);
        if(cur < min_len) min_len = cur;
    }
    int low = 1, high = min_len, best = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        int ok = 1;
        for(int i=1; i<n; i++) {
            if(strncmp(strs[0], strs[i], mid) != 0) { ok = 0; break; }
        }
        if(ok) { best = mid; low = mid + 1; }
        else high = mid - 1;
    }
    strncpy(res, strs[0], best); res[best] = '\0';
}