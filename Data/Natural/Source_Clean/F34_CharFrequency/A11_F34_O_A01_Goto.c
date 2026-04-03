int CharFrequency(char* s, char c) {
    int count = 0, i = 0;
check:
    if (s[i] == '\0') goto end;
    if (s[i] != c) goto next;
    count++;
next:
    i++;
    goto check;
end:
    return count;
}