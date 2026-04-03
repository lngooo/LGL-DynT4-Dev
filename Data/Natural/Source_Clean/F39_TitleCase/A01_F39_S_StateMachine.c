void TitleCase(char* s) {
    int newWord = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i])) {
            newWord = 1;
        } else if (newWord) {
            s[i] = toupper(s[i]);
            newWord = 0;
        } else {
            s[i] = tolower(s[i]);
        }
    }
}