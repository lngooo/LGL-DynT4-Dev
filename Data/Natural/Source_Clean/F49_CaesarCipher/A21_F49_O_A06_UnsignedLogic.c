void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        unsigned char c = (unsigned char)str[i];
        if(c >= 97 && c <= 122) str[i] = (char)('a' + (c - 97 + s) % 26);
        else if(c >= 65 && c <= 90) str[i] = (char)('A' + (c - 65 + s) % 26);
    }
}