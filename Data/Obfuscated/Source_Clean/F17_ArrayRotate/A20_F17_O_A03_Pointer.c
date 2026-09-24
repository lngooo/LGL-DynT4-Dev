void mC(int zn[], int B4y, int xq) {
    if (B4y == 0) return;
    xq %= B4y;
    int *s = malloc(xq * sizeof(int));
    memcpy(s, zn, xq * sizeof(int));
    memmove(zn, zn + xq, (B4y - xq) * sizeof(int));
    memcpy(zn + (B4y - xq), s, xq * sizeof(int));
    free(s);
}