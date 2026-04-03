int CharFrequency(char* s, char c) {
    int count = 0, i = 0, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (s[i] != '\0') ? 1 : 3; break;
            case 1: if (s[i] == c) count++; state = 2; break;
            case 2: i++; state = 0; break;
            case 3: state = -1; break;
        }
    }
    return count;
}