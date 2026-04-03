void TrimSpace(char* s) {
    char *p = s;
    int d = 0;
    for (int k = 0; *(p + k); k++) {
        char val = *(p + k);
        if (val != 32 && val != 9 && val != 10) {
            *(p + d) = val;
            d++;
        }
    }
    *(p + d) = '\0';
}