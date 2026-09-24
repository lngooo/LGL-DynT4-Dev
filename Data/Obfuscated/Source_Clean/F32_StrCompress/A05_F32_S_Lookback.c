void Yfw(char* w) {
    int yZ = strlen(w);
    if (yZ == 0) return;
    int I8 = 1;
    char Ub6 = w[0];
    for (int e = 1; e <= yZ; e++) {
        if (w[e] == Ub6) {
            I8++;
        } else {
            printf("%c%d", Ub6, I8);
            Ub6 = w[e];
            I8 = 1;
        }
    }
    printf("\n");
}