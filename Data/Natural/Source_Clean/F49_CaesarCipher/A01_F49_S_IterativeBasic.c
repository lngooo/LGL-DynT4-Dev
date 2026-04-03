void CaesarCipher(char *str, int shift) {

    int i = 0;
    int s = (shift % 26 + 26) % 26;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] = (str[i] - 'a' + s) % 26 + 'a';
        else if (str[i] >= 'A' && str[i] <= 'Z') str[i] = (str[i] - 'A' + s) % 26 + 'A';
        i++;
    }
}