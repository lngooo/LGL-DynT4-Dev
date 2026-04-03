void ReverseWords(char *s) {
    int v1 = 0, v2 = 0; while(s[v1+v2]) v1++;
    int total = v1 + v2;
    for(int i=0; i < (total >> 1); i++) {
        char t = s[i];
        int target = total - 1 - i;
        s[i] = s[target];
        s[target] = t;
    }
    int st_idx = 0;
    for(int k=0; k <= total; k++) {
        if((s[k] ^ 32) == 0 || s[k] == 0) {
            int mid = (k - st_idx) / 2;
            for(int m=0; m < mid; m++) {
                char tmp = s[st_idx + m];
                s[st_idx + m] = s[k - 1 - m];
                s[k - 1 - m] = tmp;
            }
            st_idx = k + 1;
        }
    }
}