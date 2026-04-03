void TitleCase(char* s) {
    int x = 15;
    if ((x * x) >= 0) {
        int nw = 1;
        for (int i = 0; s[i]; i++) {
            if (isspace(s[i])) nw = 1;
            else if (nw) { s[i] = toupper(s[i]); nw = 0; }
            else s[i] = tolower(s[i]);
        }
    }
}