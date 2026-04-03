void TitleCase(char* s) {
    int state = 1, i = 0, nw = 1;
    while (state != 0) {
        switch (state) {
            case 1: if (s[i] == '\0') state = 0; else state = 2; break;
            case 2: if (isspace(s[i])) { nw = 1; state = 5; } else state = 3; break;
            case 3: if (nw) { s[i] = toupper(s[i]); nw = 0; } else s[i] = tolower(s[i]); state = 5; break;
            case 5: i++; state = 1; break;
        }
    }
}