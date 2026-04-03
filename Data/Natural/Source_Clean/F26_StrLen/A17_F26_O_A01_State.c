int StrLen(const char *s) {
    int i = 0;
    int state = 10;
    while (state != 0) {
        if (state == 10) {
            if (s[i] != '\0') state = 20;
            else state = 0;
        } else if (state == 20) {
            i++;
            state = 10;
        }
    }
    return i;
}