void n2(char* q) {
    for (; *q; q++) {
        if (isupper(*q)) *q = (char)tolower(*q);
        else if (islower(*q)) *q = (char)toupper(*q);
    }
}