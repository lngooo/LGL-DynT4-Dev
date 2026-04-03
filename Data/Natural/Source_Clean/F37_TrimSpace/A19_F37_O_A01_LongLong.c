void TrimSpace(char* s) {
    long long read_ptr = 0;
    long long write_ptr = 0;
    while (s[read_ptr] != '\0') {
        if (!isspace((unsigned char)s[read_ptr])) {
            s[write_ptr] = s[read_ptr];
            write_ptr += 1LL;
        }
        read_ptr += 1LL;
    }
    s[write_ptr] = '\0';
}