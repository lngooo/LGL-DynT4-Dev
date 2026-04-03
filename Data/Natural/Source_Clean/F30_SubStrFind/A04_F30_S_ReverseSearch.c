int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        if (text[i + m - 1] == pattern[m - 1]) {
            int j = m - 2;
            while (j >= 0 && text[i + j] == pattern[j]) j--;
            if (j == -1) return i;
        }
    }
    return -1;
}