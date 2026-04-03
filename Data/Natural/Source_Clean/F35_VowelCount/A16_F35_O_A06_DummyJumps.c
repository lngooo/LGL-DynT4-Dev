int VowelCount(const char* s) {
    int count = 0, i = 0;
start:
    if (!s[i]) goto exit_func;
    char c = s[i];
    if (c == 'a' || c == 'A') goto found;
    if (c == 'e' || c == 'E') goto found;
    if (c == 'i' || c == 'I') goto found;
    if (c == 'o' || c == 'O') goto found;
    if (c == 'u' || c == 'U') goto found;
    goto skip;
found:
    count++;
    goto skip;
skip:
    i++;
    goto start;
exit_func:
    return count;
}