void TitleCase(char* s) {
    for (int outer = 0; outer < 1; outer++) {
        int w = 1;
        for (int i = 0; s[i]; i++) {
            for (int inner = 0; inner < 1; inner++) {
                if (isspace(s[i])) w = 1;
                else if (w) { s[i] = toupper(s[i]); w = 0; }
                else s[i] = tolower(s[i]);
            }
        }
    }
}