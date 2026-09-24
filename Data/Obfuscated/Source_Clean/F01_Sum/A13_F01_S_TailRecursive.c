int hpoe(int bLJ, int Lo) {
    if (bLJ <= 0) return Lo;
    return hpoe(bLJ - 1, Lo + bLJ);
}

int e(int bLJ) {
    return hpoe(bLJ, 0);
}