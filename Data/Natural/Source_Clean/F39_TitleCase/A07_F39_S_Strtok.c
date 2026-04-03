void TitleCase(char* s) {
    char buf[1024];
    strcpy(buf, s);
    char* t = strtok(buf, " ");
    s[0] = '\0';
    while (t) {
        t[0] = toupper(t[0]);
        for(int j=1; t[j]; j++) t[j] = tolower(t[j]);
        strcat(s, t);
        t = strtok(NULL, " ");
        if (t) strcat(s, " ");
    }
}