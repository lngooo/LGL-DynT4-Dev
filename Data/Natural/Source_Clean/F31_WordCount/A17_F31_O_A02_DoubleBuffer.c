int WordCount(char* s) {
    char b1[512], b2[512];
    memset(b1, 0, 512);
    strncpy(b1, s, 511);
    strcpy(b2, b1);
    int c = 0;
    char* t = strtok(b2, " ");
    while(t) { c++; t = strtok(NULL, " "); }
    return c;
}