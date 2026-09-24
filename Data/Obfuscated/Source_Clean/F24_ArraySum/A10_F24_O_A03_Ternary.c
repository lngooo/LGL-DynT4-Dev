int U0(int ceux[], int j) {
    return (j <= 0) ? 0 : ceux[0] + U0(ceux + 1, j - 1);
}