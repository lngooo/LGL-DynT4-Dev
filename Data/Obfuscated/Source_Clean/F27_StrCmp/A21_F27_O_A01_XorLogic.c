int Gx(const char *n, const char *D) {
    for(; !(*n ^ *D); n++, D++) {
        if(!*n) return 0;
    }
    return *(unsigned char*)n - *(unsigned char*)D;
}