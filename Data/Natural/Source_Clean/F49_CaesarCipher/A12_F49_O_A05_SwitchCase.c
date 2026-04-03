void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    for(int i=0; str[i]; i++) {
        int type = (str[i] >= 'a' && str[i] <= 'z') ? 1 : (str[i] >= 'A' && str[i] <= 'Z' ? 2 : 0);
        switch(type) {
            case 1: str[i] = (str[i]-'a'+s)%26+'a'; break;
            case 2: str[i] = (str[i]-'A'+s)%26+'A'; break;
            default: break;
        }
    }
}