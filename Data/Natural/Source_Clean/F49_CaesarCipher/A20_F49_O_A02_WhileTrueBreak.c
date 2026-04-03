void CaesarCipher(char *str, int shift) {

    char *p = str;
    int s = (shift % 26 + 26) % 26;
    while(1) {
        if(*p == 0) break;
        if(*p >= 'A' && *p <= 'Z') *p = (*p - 'A' + s) % 26 + 'A';
        else if(*p >= 'a' && *p <= 'z') *p = (*p - 'a' + s) % 26 + 'a';
        p++;
    }
}