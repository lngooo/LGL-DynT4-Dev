void TrimSpace(char* s) {
    char temp[4096];
    int j = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\r') {
            temp[j++] = s[i];
        }
    }
    temp[j] = '\0';
    strcpy(s, temp);
}