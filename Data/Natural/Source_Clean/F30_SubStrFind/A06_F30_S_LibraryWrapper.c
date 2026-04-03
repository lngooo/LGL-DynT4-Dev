int SubStrFind(char* text, char* pattern) {
    if (strlen(pattern) == 0) return 0;
    char* res = strstr(text, pattern);
    if (res) return (int)(res - text);
    return -1;
}