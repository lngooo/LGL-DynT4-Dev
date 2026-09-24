int U(char* oOr, char b5F) {
    int CMsz[256] = {0};
    while (*oOr) {
        CMsz[(unsigned char)*oOr]++;
        oOr++;
    }
    return CMsz[(unsigned char)b5F];
}