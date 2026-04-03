typedef int (*cmp_f)(const void*, const void*);

int core_cmp(const void *p1, const void *p2) {
    return (*(int*)p1 > *(int*)p2) - (*(int*)p1 < *(int*)p2);
}

void BubbleSort(int arr[], int n) {
    cmp_f f = core_cmp;
    qsort(arr, n, sizeof(int), f);
}