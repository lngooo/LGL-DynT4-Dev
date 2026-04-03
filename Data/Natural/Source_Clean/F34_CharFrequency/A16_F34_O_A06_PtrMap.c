int CharFrequency(char* s, char c) {
    int h[256];
    memset(h, 0, sizeof(h));
    for(char* p = s; *p; p++) {
        (*(h + (unsigned char)*p))++;
    }
    return *(h + (unsigned char)c);
}