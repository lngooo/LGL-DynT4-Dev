void TrimSpace(char* s) {
    int i = 0, j = 0, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (s[i] == 0) ? 3 : 1; break;
            case 1: if (!isspace((unsigned char)s[i])) { s[j] = s[i]; j++; } state = 2; break;
            case 2: i++; state = 0; break;
            case 3: s[j] = 0; state = -1; break;
        }
    }
}