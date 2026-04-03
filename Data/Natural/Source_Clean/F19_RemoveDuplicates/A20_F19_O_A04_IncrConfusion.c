int RemoveDuplicates(int arr[], int n) {
    int *src = arr, *dst = arr;
    int i = -1;
    while (++i < n) {
        int *c = arr, hit = 0;
        while (c < dst) { if (*c == *src) hit = 1; c++; }
        if (!hit) *dst++ = *src;
        src++;
    }
    return (int)(dst - arr);
}