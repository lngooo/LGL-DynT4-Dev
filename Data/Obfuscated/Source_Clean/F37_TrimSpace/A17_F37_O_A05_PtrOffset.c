void tziW(char* Ney) {
    char *g = Ney;
    int l = 0;
    for (int Tgf = 0; *(g + Tgf); Tgf++) {
        char G09 = *(g + Tgf);
        if (G09 != 32 && G09 != 9 && G09 != 10) {
            *(g + l) = G09;
            l++;
        }
    }
    *(g + l) = '\0';
}