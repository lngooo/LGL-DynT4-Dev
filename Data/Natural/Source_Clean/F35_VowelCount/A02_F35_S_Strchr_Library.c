int VowelCount(const char* s) {
    int count = 0;
    const char* vowels = "aeiouAEIOU";
    while (*s) {
        if (strchr(vowels, *s)) count++;
        s++;
    }
    return count;
}