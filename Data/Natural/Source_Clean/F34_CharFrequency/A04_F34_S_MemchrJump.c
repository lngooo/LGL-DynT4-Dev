int CharFrequency(char* s, char c) {
    int count = 0;
    char* ptr = s;
    int len = strlen(s);
    while ((ptr = memchr(ptr, c, (s + len) - ptr)) != NULL) {
        count++;
        ptr++;
    }
    return count;
}