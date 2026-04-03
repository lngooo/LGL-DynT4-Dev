void TitleCase(char* s) {
    int len = strlen(s);
    char* b = malloc(len + 1);
    char* res = malloc(len + 1);
    res[0] = 0;
    strcpy(b, s);
    char* tok = strtok(b, " ");
    while(tok) {
        char word[128];
        strcpy(word, tok);
        word[0] = toupper(word[0]);
        for(int i=1; word[i]; i++) word[i] = tolower(word[i]);
        strcat(res, word);
        tok = strtok(NULL, " ");
        if(tok) strcat(res, " ");
    }
    strcpy(s, res);
    free(b); free(res);
}