void CaesarCipher(char *str, int shift) {

    int s = (shift % 26 + 26) % 26;
    int idx = 0;
    RE: if (str[idx] == 0) goto END;
    if (str[idx] >= 'a' && str[idx] <= 'z') str[idx] = (str[idx]-'a'+s)%26+'a';
    else if (str[idx] >= 'A' && str[idx] <= 'Z') str[idx] = (str[idx]-'A'+s)%26+'A';
    idx++; goto RE;
    END:;
}