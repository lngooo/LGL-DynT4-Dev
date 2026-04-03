void CaesarCipher(char *str, int shift) {

    int s1 = shift % 26;
    int s2 = 52;
    int fs = (s1 + s2) % 26;
    for(int k=0; str[k]; k++) {
        if(str[k] >= 97 && str[k] <= 122) str[k] = (str[k]-97+fs)%26+97;
        else if(str[k] >= 65 && str[k] <= 90) str[k] = (str[k]-65+fs)%26+65;
    }
}