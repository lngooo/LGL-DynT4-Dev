void ArrayReverse(int arr[], int size) {
    int *p = arr;
    for(int i=0; i<size/2; i++) {
        int *left = &p[i];
        int *right = &p[size-1-i];
        int val = *left;
        *left = *right;
        *right = val;
    }
}