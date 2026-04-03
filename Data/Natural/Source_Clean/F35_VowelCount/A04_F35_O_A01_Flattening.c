int VowelCount(const char* s) {
    int count = 0, i = 0, state = 1;
    while (state != 0) {
        switch (state) {
            case 1: 
                if (s[i] == '\0') state = 0;
                else state = 2;
                break;
            case 2: {
                char c = s[i];
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
                    count++;
                i++;
                state = 1;
                break;
            }
        }
    }
    return count;
}