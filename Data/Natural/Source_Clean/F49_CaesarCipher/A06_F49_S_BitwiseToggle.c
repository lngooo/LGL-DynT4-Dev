void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        char mask = str[i] & 32;
        char c = str[i] & ~32;
        if(c >= 'A' && c <= 'Z') {
            str[i] = ((c - 'A' + s) % 26 + 'A') | mask;
        }
    }
}