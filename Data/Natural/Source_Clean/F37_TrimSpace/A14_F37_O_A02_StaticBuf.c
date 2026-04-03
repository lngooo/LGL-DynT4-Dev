static char g_buf[4096];
void TrimSpace(char* s) {
    int n = 0;
    char *ptr = s;
    while (*ptr) {
        if (*ptr != ' ' && *ptr != '\t' && *ptr != '\n') {
            *(g_buf + n) = *ptr;
            n++;
        }
        ptr++;
    }
    *(g_buf + n) = '\0';
    strcpy(s, g_buf);
}