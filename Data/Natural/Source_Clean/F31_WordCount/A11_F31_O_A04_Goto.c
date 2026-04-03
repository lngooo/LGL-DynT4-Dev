int WordCount(char* s) {
    int count = 0;
start:
    if (!*s) goto end;
skip_ws:
    if (*s && isspace(*s)) { s++; goto skip_ws; }
    if (!*s) goto end;
    count++;
skip_word:
    if (*s && !isspace(*s)) { s++; goto skip_word; }
    goto start;
end:
    return count;
}