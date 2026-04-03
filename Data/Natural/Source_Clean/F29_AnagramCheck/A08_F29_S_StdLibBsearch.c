int cmp(const void* a, const void* b) { return (*(char*)a - *(char*)b); }

int AnagramCheck(char* s1, char* s2) {
    int l1 = strlen(s1), l2 = strlen(s2);
    if (l1 != l2) return 0;
    qsort(s1, l1, 1, cmp);
    qsort(s2, l2, 1, cmp);
    return memcmp(s1, s2, l1) == 0;
}