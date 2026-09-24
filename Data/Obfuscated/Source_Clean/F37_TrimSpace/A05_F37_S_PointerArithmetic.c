void SOs1(char* yIpU) {
    char *NBb = yIpU, *CGt = yIpU;
    while (*NBb) {
        if (*NBb != 32 && *NBb != 9 && *NBb != 10 && *NBb != 13) {
            *CGt = *NBb;
            CGt++;
        }
        NBb++;
    }
    *CGt = '\0';
}