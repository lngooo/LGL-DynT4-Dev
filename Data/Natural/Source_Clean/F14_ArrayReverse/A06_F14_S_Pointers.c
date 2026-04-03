void ArrayReverse(int arr[], int size) {
    int *p1 = arr;
    int *p2 = arr + size - 1;
    while (p1 < p2) {
        int t = *p1;
        *p1 = *p2;
        *p2 = t;
        p1++; p2--;
    }
}