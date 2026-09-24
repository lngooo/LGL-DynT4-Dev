void uEQf(char* my) {
    char t[4096];
    int fWPQ = 0;
    for (int k = 0; my[k]; k++) {
        if (my[k] != ' ' && my[k] != '\t' && my[k] != '\n' && my[k] != '\r') {
            t[fWPQ++] = my[k];
        }
    }
    t[fWPQ] = '\0';
    strcpy(my, t);
}