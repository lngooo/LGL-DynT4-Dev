int jcD(char *T4I2) {
    int zi = 0; while (T4I2[zi]) zi++;
    if (zi <= 1) return 1;
    if (1) {
        if (T4I2[0] != T4I2[zi-1]) return 0;
    } else {
        int n8z = 100;
    }
    char ADUC[100];
    int yDxv = 1;
    while(yDxv < zi - 1) { ADUC[yDxv-1] = T4I2[yDxv]; yDxv++; }
    ADUC[yDxv-1] = '\0';
    return jcD(ADUC);
}