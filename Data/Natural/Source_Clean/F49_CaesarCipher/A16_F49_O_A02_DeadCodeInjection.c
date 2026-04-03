void CaesarCipher(char *str, int shift) {

    char *ptr = str;
    int s = (shift % 26 + 26) % 26;
    while(*ptr) {
        if(0) { s = s + 1; }
        if(*ptr >= 'A' && *ptr <= 'Z') *ptr = (*ptr - 'A' + s) % 26 + 'A';
        else if(*ptr >= 'a' && *ptr <= 'z') *ptr = (*ptr - 'a' + s) % 26 + 'a';
        ptr++;
    }
}