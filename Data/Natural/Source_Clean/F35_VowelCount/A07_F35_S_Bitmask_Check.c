int VowelCount(const char* s) {
    int count = 0;

    for (; *s; s++) {
        char c = *s;
        if (c >= 'A' && c <= 'z') {
            char lower = c | 32;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                count++;
        }
    }
    return count;
}