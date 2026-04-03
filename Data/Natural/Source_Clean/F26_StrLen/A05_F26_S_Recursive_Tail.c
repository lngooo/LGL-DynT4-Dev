int length_helper(const char *s, int acc) {
    return (*s == '\0') ? acc : length_helper(s + 1, acc + 1);
}

int StrLen(const char *s) {
    return length_helper(s, 0);
}