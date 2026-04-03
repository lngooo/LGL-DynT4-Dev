void CaesarCipher(char *str, int shift) {

    if (*str == '\0') return;
    int s = (shift % 26 + 26) % 26;
    if (*str >= 'A' && *str <= 'Z') *str = (*str - 'A' + s) % 26 + 'A';
    else if (*str >= 'a' && *str <= 'z') *str = (*str - 'a' + s) % 26 + 'a';
    CaesarCipher(str + 1, shift);
}