void TrimSpace(char* s) {
    char *rd = s, *wr = s;
loop:
    if (!*rd) goto end;
    if (*rd == 32 || (*rd >= 9 && *rd <= 13)) goto skip;
    *wr = *rd;
    wr++;
skip:
    rd++;
    goto loop;
end:
    *wr = '\0';
}