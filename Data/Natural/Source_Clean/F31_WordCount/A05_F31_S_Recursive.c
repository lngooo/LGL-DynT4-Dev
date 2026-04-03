int skip_and_count(char* s, int in_word) {
    if (!*s) return 0;
    if (isspace(*s)) return skip_and_count(s + 1, 0);
    if (!in_word) return 1 + skip_and_count(s + 1, 1);
    return skip_and_count(s + 1, 1);
}

int WordCount(char* s) {
    return skip_and_count(s, 0);
}