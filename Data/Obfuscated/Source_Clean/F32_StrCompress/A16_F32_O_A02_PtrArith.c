void A(char* v) {
    char *Cj = v;
    while (*Cj) {
        char *UP = Cj;
        while (*(UP + 1) == *Cj) UP++;
        printf("%c%d", *Cj, (int)(UP - Cj + 1));
        Cj = UP + 1;
    }
    printf("\n");
}