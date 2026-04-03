void TitleCase(char* s) {
    for (int i = 0; s[i]; i++) s[i] = tolower(s[i]);
    if (s[0] != '\0') s[0] = toupper(s[0]);
    for (int i = 1; s[i]; i++) {
        if (isspace(s[i-1])) s[i] = toupper(s[i]);
    }
}