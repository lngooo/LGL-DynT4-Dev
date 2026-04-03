void ReverseWords(char *s) {
    char *words[128]; int count = 0;
    char temp[256]; strcpy(temp, s);
    char *tok = strtok(temp, " ");
    while(tok) { words[count++] = tok; tok = strtok(NULL, " "); }
    s[0] = '\0';
    for(int i=count-1; i>=0; i--) {
        strcat(s, words[i]);
        if(i > 0) strcat(s, " ");
    }
}