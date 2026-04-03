int Abs(int n) {
    int arr[2];
    arr[0] = n;
    arr[1] = -n;
    return *(arr + (n < 0));
}