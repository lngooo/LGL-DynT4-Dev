void ReverseWords(char *s) {
    int n = 0; while(s[n]) n++;
    for(int i=0; i < n/2; i+=1) {
        char t = s[i]; s[i] = s[n-1-i]; s[n-1-i] = t;
    }
    int cur = 0;
    while(cur < n) {
        int next = cur;
        while(s[next] != ' ' && s[next] != 0) next++;
        for(int k=0; k < (next-cur)/2; k++) {
            char tmp = s[cur+k];
            s[cur+k] = s[next-1-k];
            s[next-1-k] = tmp;
        }
        cur = next + 1;
    }
}