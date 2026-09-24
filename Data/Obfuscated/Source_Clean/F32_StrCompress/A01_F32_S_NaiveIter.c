void Q5(char* zqa) {
    int co = strlen(zqa);
    if (co == 0) return;
    for (int pzaB = 0; pzaB < co; pzaB++) {
        int e = 1;
        while (pzaB + 1 < co && zqa[pzaB] == zqa[pzaB + 1]) {
            e++;
            pzaB++;
        }
        printf("%c%d", zqa[pzaB], e);
    }
    printf("\n");
}