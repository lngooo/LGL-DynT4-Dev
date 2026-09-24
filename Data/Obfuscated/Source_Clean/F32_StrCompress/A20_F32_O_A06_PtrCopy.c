void p(char* qZp) {
    char *OF = qZp;
    while (*OF) {
        int j = 0;
        char u = *OF;
        char *KvaE = OF;
        while (*KvaE == u) { j++; KvaE++; }
        printf("%c%d", u, j);
        OF = KvaE;
    }
    printf("\n");
}