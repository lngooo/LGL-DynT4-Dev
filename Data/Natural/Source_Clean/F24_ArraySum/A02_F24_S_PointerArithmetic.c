int ArraySum(int arr[], int n) {
    int sum = 0, *p = arr;
    while (n--) sum += *p++;
    return sum;
}