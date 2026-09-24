int Hz(char* Lzmi, char Nsl) {
    int O8 = 0;
    char* RI = Lzmi;
    while (1) {
        RI = strchr(RI, Nsl);
        if (RI == NULL) break;
        O8++;
        RI++;
    }
    return O8;
}