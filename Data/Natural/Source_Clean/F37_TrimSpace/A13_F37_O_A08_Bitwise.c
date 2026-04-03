void TrimSpace(char* s) {
    int write_idx = 0;
    for (int k = 0; s[k]; k++) {
        unsigned char c = s[k];
        int is_s = !(c ^ 32);
        int is_t = !(c ^ 9);
        int is_n = !(c ^ 10);
        if (!(is_s | is_t | is_n)) {
            s[write_idx] = s[k];
            write_idx = -~write_idx; 
        }
    }
    s[write_idx] = 0;
}