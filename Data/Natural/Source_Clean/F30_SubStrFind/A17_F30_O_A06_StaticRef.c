static int calls = 0;
int SubStrFind(char* text, char* pattern) {
    calls++;
    if (strlen(pattern) == 0) return 0;
    char* found = strstr(text, pattern);
    return found ? (int)(found - text) : -1;
}