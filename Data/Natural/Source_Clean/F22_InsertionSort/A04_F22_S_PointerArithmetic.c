void InsertionSort(int arr[], int n) {
    int *p, *q, key;
    for (p = arr + 1; p < arr + n; p++) {
        key = *p;
        q = p - 1;
        while (q >= arr && *q > key) {
            *(q + 1) = *q;
            q--;
        }
        *(q + 1) = key;
    }
}