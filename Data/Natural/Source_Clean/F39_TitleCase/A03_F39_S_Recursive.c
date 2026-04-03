void process(char* s, int isFirst) {
    if (!*s) return;
    if (isspace(*s)) {
        process(s + 1, 1);
    } else {
        *s = isFirst ? toupper(*s) : tolower(*s);
        process(s + 1, 0);
    }
}

void TitleCase(char* s) {
    process(s, 1);
}