void CaesarCipher(char *str, int shift) {

    char *p = str;
    int s = (shift % 26 + 26) % 26;
    while(*p != 0) {
        char **pp = &p;
        if(**pp >= 'A' && **pp <= 'Z') **pp = (**pp - 'A' + s) % 26 + 'A';
        else if(**pp >= 'a' && **pp <= 'z') **pp = (**pp - 'a' + s) % 26 + 'a';
        p++;
    }
}