int JfnU(int VAZC, int kZU) {
    return VAZC - ((VAZC - kZU) & ((VAZC - kZU) >> 31));
}

int U5Ai(int j[], int tE) {
    int e79 = j[0];
    for(int faAO=1; faAO<tE; faAO++) e79 = JfnU(e79, j[faAO]);
    return e79;
}