int VowelCount(const char* s) {
    int v_count = 0;
    int dummy_count = 0;
    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            v_count++;
        } else {
            dummy_count++;
        }
    }
    return v_count + (dummy_count * 0);
}