void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        if(((str[i] >= 'a') & (str[i] <= 'z')) | ((str[i] >= 'A') & (str[i] <= 'Z'))) {
            char b = (str[i] & 0x20) ? 0x61 : 0x41;
            str[i] = (char)((((str[i] - b) + s) % 26) + b);
        }
    }
}