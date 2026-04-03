void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    char alph[] = "abcdefghijklmnopqrstuvwxyz";
    char ALPH[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0; str[i]; i++) {
        for(int j=0; j<26; j++) {
            if(str[i] == alph[j]) { str[i] = alph[(j+s)%26]; break; }
            if(str[i] == ALPH[j]) { str[i] = ALPH[(j+s)%26]; break; }
        }
    }
}