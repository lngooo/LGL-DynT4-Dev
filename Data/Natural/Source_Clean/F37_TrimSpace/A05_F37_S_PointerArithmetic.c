void TrimSpace(char* s) {
    char *rd = s, *wr = s;
    while (*rd) {
        if (*rd != 32 && *rd != 9 && *rd != 10 && *rd != 13) {
            *wr = *rd;
            wr++;
        }
        rd++;
    }
    *wr = '\0';
}