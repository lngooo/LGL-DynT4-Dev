void Okx(char* Glt) {
    int hQ = 0, Gu = 0;
    while (1) {
        if (Glt[hQ] == '\0') break;
        unsigned char xZW = (unsigned char)Glt[hQ];
        if (!isspace(xZW)) {
            Glt[Gu] = (char)xZW;
            Gu++;
        }
        hQ++;
    }
    Glt[Gu] = '\0';
}