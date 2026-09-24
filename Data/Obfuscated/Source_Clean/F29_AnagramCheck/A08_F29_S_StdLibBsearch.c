int s(const void* V, const void* HZ) { return (*(char*)V - *(char*)HZ); }

int pYy(char* S02a, char* qnj) {
    int bbP = strlen(S02a), fxDX = strlen(qnj);
    if (bbP != fxDX) return 0;
    qsort(S02a, bbP, 1, s);
    qsort(qnj, fxDX, 1, s);
    return memcmp(S02a, qnj, bbP) == 0;
}