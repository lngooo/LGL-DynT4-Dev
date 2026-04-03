int ArraySum(int arr[], int n) {
    int sum = 0;
    int i = -1;
    while (++i < n) {
        sum += *(arr + i);
    }
    return sum;
}