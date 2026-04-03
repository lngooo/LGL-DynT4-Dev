void TitleCase(char* s) {
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--) {

    }
    for (int i = 0; i < n; i++) {
        char prev = (i == 0) ? ' ' : s[i-1];
        if (isspace(prev) && !isspace(s[i])) s[i] = toupper(s[i]);
        else if (!isspace(s[i])) s[i] = tolower(s[i]);
    }
}