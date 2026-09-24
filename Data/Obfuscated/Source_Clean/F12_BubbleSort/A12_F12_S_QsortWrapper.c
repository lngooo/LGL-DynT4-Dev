int yX(const void *pVcm, const void *VXgH) {
    return (*(int*)pVcm - *(int*)VXgH);
}

void Ey(int ukO[], int V) {
    qsort(ukO, V, sizeof(int), yX);
}