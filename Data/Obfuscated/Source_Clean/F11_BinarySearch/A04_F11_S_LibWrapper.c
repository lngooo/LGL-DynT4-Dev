int AI(const void *fwo4, const void *Qv) {
    return (*(int*)fwo4 - *(int*)Qv);
}

int xsn(int J0WP[], int h, int Cp5) {
    int *cR = (int*)bsearch(&Cp5, J0WP, h, sizeof(int), AI);
    if (cR == NULL) return -1;
    return (int)(cR - J0WP);
}