void ulT(char* x) {
    int g = strlen(x);
    if (g == 0) return;
    for (int Xvu = 0; Xvu < g; Xvu++) {
        int l = 1;
        if ((g * g + 1) > 0) {
            while (Xvu + 1 < g && x[Xvu] == x[Xvu+1]) { l++; Xvu++; }
            printf("%c%d", x[Xvu], l);
        }
    }
    printf("\n");
}