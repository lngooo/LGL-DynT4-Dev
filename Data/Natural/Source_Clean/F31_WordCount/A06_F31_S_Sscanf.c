int WordCount(char* s) {
    int count = 0, offset;
    char word[256];
    while (sscanf(s, "%255s%n", word, &offset) == 1) {
        count++;
        s += offset;
    }
    return count;
}