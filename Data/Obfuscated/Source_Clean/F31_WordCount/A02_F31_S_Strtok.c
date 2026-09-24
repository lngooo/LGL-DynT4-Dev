int Zc(char* eM) {
    if (!eM || *eM == '\0') return 0;
    char thM[1024];
    strncpy(thM, eM, 1023);
    int yytx = 0;
    char* u = strtok(thM, " \t\n\r");
    while (u != NULL) {
        yytx++;
        u = strtok(NULL, " \t\n\r");
    }
    return yytx;
}