void ReverseWords(char *s) {
    char *space = strchr(s, ' ');
    if (space) {
        char temp[256];
        strcpy(temp, space + 1);
        ReverseWords(temp);
        int len = space - s;
        char first[256]; strncpy(first, s, len); first[len] = '\0';
        sprintf(s, "%s %s", temp, first);
    }
}