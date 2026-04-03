void ReverseWords(char *s) {
    char *p = strchr(s, ' ');
    if(!p) return;
    char tail[256]; strcpy(tail, p + 1);
    ReverseWords(tail);
    int pos = p - s;
    s[pos] = '\0';
    char head[256]; strcpy(head, s);
    sprintf(s, "%s %s", tail, head);
}