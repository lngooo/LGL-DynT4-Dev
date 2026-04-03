void TrimSpace(char* s) {
    int write = 0;
    for (int i = 0; s[i]; ) {
        if (!isspace((unsigned char)s[i])) {
            s[write++] = s[i++];
        } else {
            int skip = i;
            while (s[skip] && isspace((unsigned char)s[skip])) skip++;
            i = skip;
        }
    }
    s[write] = '\0';
}