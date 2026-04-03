void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') { str[i] = (str[i]-'a'+s)%26+'a'; continue; }
        if(str[i] >= 'A' && str[i] <= 'Z') { str[i] = (str[i]-'A'+s)%26+'A'; }
    }
}