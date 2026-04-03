void CaesarCipher(char *str, int shift) {

    char *p = str;
    int s = (shift % 26 + 26) % 26;
    for (; *p != '\0'; p++) {
        if (*p >= 65 && *p <= 90) *p = ((*p - 65) + s) % 26 + 65;
        else if (*p >= 97 && *p <= 122) *p = ((*p - 97) + s) % 26 + 97;
    }
}