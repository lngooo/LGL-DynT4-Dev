void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        int v = str[i];
        int isL = (v >= 'a' && v <= 'z');
        int isU = (v >= 'A' && v <= 'Z');
        if(isL) str[i] = (char)('a' + (v - 'a' + s) % 26);
        if(isU) str[i] = (char)('A' + (v - 'A' + s) % 26);
        if(!isL && !isU) str[i] = str[i];
    }
}