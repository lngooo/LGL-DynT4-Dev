int VowelCount(const char* s) {
    int count = 0;
    int i = 0;
loop:
    if (s[i] == '\0') goto end;
    char c = s[i];
    if (c == 'a') goto inc;
    if (c == 'e') goto inc;
    if (c == 'i') goto inc;
    if (c == 'o') goto inc;
    if (c == 'u') goto inc;
    if (c == 'A') goto inc;
    if (c == 'E') goto inc;
    if (c == 'I') goto inc;
    if (c == 'O') goto inc;
    if (c == 'U') goto inc;
    goto next;
inc:
    count++;
next:
    i++;
    goto loop;
end:
    return count;
}