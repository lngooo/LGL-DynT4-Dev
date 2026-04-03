void ArrayReverse(int arr[], int size) {
    int *p = arr;
    for(int i = 0; i < (size >> 1); i++) {
        int *a = p + i;
        int *b = p + (size - 1 - i);
        *a ^= *b; *b ^= *a; *a ^= *b;
    }
}