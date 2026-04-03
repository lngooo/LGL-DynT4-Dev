int VowelCount(const char* s) {
    int c = 0, i = 0, state = 5;
    while (state != 0) {
        if (state == 5) {
            if (s[i]) state = 3; else state = 0;
        } else if (state == 3) {
            switch (s[i]) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    c++; break;
            }
            i++; state = 5;
        }
    }
    return c;
}