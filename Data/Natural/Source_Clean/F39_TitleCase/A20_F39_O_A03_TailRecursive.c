void TitleCase(char* s) {
tail_recurse:
    if (!*s) return;
    static int isFirst = 1;
    if (isspace(*s)) {
        isFirst = 1;
    } else {
        *s = isFirst ? toupper(*s) : tolower(*s);
        isFirst = 0;
    }
    s++;
    goto tail_recurse;
}