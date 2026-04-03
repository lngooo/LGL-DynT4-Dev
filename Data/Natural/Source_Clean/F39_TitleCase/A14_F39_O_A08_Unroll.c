void TitleCase(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len; i+=2) {
        s[i] = tolower(s[i]);
        if (i+1 < len) s[i+1] = tolower(s[i+1]);
    }
    if (len > 0) s[0] = toupper(s[0]);
    for (int i = 1; i < len; i++) {
        if (s[i-1] == ' ') s[i] = toupper(s[i]);
    }
}