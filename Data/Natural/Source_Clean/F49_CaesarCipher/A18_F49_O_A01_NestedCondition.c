void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        if(str[i] >= 'A') {
            if(str[i] <= 'Z') str[i] = (str[i]-'A'+s)%26+'A';
            else if(str[i] >= 'a') {
                if(str[i] <= 'z') str[i] = (str[i]-'a'+s)%26+'a';
            }
        }
    }
}