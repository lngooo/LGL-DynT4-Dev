void CaesarCipher(char *str, int shift) {

    char mapL[26], mapU[26];
    int s = (shift % 26 + 26) % 26;
    for(int k=0; k<26; k++) {
        mapL[k] = 'a' + (k + s) % 26;
        mapU[k] = 'A' + (k + s) % 26;
    }
    while(*str) {
        if(*str >= 'a' && *str <= 'z') *str = mapL[*str - 'a'];
        else if(*str >= 'A' && *str <= 'Z') *str = mapU[*str - 'A'];
        str++;
    }
}