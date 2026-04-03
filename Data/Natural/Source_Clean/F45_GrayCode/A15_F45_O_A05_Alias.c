unsigned int GrayCode(unsigned int n) {
    unsigned int arr[3];
    arr[0] = n;
    arr[1] = n >> 1;
    arr[2] = arr[0] ^ arr[1];
    unsigned int *ptr = &arr[2];
    return *ptr;
}