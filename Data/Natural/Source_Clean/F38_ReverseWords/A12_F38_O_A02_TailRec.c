void ReverseWords(char *s) {
    char *space = strrchr(s, ' ');
    if(!space) return;
    int suffix_len = strlen(space + 1);
    char *suffix = (char*)malloc(suffix_len + 1);
    strcpy(suffix, space + 1);
    *space = '\0';
    ReverseWords(s);
    char *prefix = (char*)malloc(strlen(s) + 1);
    strcpy(prefix, s);
    sprintf(s, "%s %s", suffix, prefix);
    free(suffix); free(prefix);
}