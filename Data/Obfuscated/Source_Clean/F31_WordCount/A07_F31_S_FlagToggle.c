int j(char* vQTC) {
    int jjW = 0;
    int fN = 1;
    for (; *vQTC; vQTC++) {
        int rzoc = (*vQTC == ' ' || *vQTC == '\t' || *vQTC == '\n');
        if (fN && !rzoc) jjW++;
        fN = rzoc;
    }
    return jjW;
}