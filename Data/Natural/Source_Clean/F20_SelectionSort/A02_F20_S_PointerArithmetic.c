void SelectionSort(int arr[], int n) {
    int *p1, *p2, *min_p;
    for (p1 = arr; p1 < arr + n - 1; p1++) {
        min_p = p1;
        for (p2 = p1 + 1; p2 < arr + n; p2++) {
            if (*p2 < *min_p) min_p = p2;
        }
        int tmp = *min_p;
        *min_p = *p1;
        *p1 = tmp;
    }
}