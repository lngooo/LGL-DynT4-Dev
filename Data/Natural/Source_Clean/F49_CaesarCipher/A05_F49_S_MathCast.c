void CaesarCipher(char *str, int shift) {

    int s = (int)((shift % 26 + 26) % 26);
    for(int idx=0; str[idx] != 0; idx++) {
        int c = (int)str[idx];
        if(c >= 97 && c <= 122) str[idx] = (char)(97 + (c - 97 + s) % 26);
        if(c >= 65 && c <= 90) str[idx] = (char)(65 + (c - 65 + s) % 26);
    }
}