int LA(char* J, char* o) {
    char* jt = J;
    int VS = strlen(o);
    if (VS == 0) return 0;
    while ((jt = strchr(jt, o[0])) != NULL) {
        if (strncmp(jt, o, VS) == 0) return (int)(jt - J);
        jt++;
    }
    return -1;
}