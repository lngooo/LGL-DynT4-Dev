typedef int (*hp)(const void*, const void*);

int uakY(const void *Lhz, const void *ac) {
    return (*(int*)Lhz > *(int*)ac) - (*(int*)Lhz < *(int*)ac);
}

void SMjx(int p[], int Ff) {
    hp WOd = uakY;
    qsort(p, Ff, sizeof(int), WOd);
}