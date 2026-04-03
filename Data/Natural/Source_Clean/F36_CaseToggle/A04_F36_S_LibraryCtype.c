void CaseToggle(char* s) {
    for (; *s; s++) {
        if (isupper(*s)) *s = (char)tolower(*s);
        else if (islower(*s)) *s = (char)toupper(*s);
    }
}