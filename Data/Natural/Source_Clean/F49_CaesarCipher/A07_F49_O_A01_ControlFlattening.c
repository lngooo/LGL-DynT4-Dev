void CaesarCipher(char *str, int shift) {

    int state = 0, i = 0, s = (shift % 26 + 26) % 26;
    while (state != 4) {
        switch (state) {
            case 0: if (str[i]) state = 1; else state = 4; break;
            case 1: if (str[i]>='a'&&str[i]<='z') str[i]=(str[i]-'a'+s)%26+'a'; state=2; break;
            case 2: if (str[i]>='A'&&str[i]<='Z') str[i]=(str[i]-'A'+s)%26+'A'; state=3; break;
            case 3: i++; state = 0; break;
        }
    }
}