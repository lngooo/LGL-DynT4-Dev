void u(char* fi1g) {
    while (*fi1g) {
        char L[2] = {*fi1g, '\0'};
        int EF = strspn(fi1g, L);
        printf("%c%d", *fi1g, EF);
        fi1g += EF;
    }
    printf("\n");
}