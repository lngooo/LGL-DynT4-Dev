void CaseToggle(char* s) {
    for (int i = 0; s[i]; i++) {
        unsigned char c = (unsigned char)s[i];
        unsigned char alpha = c | 32;
        if (alpha >= 'a' && alpha <= 'z') {
            s[i] = (char)(c ^ 32);
        }
    }
}