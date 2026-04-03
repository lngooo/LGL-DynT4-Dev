void LCP(char **strs, int n, char *res) {
    int state = 0, j = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (n > 0 && strs[0][j]) ? 1 : 3; break;
            case 1: {
                int i = 1;
                while (i < n && strs[i][j] == strs[0][j]) i++;
                if (i == n) { res[j] = strs[0][j]; j++; state = 0; }
                else state = 3;
                break;
            }
        }
    }
    res[j] = '\0';
}