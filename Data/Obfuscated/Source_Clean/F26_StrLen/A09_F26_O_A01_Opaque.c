int go(const char *hhJT) {
    int i3w = 0;
    while (hhJT[i3w] != '\0') {
        if (((i3w * i3w) + 1) > 0) {
            i3w++;
        } else {
            i3w--; 
        }
    }
    return i3w;
}