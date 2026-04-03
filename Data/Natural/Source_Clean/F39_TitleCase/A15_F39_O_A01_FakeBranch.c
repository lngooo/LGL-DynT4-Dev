void TitleCase(char* s) {
    int cond = 42;
    if (cond < 10) {

        s[0] = 'Z';
    } else {
        int w = 1;
        for (int i = 0; s[i]; i++) {
            if (isspace(s[i])) w = 1;
            else {
                s[i] = w ? toupper(s[i]) : tolower(s[i]);
                w = 0;
            }
        }
    }
}