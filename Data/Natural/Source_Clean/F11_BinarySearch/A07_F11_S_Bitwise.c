int BinarySearch(int arr[], int size, int target) {
    int pos = 0;
    int max_bit = 31 - __builtin_clz(size);
    for (int i = max_bit; i >= 0; i--) {
        int next_pos = pos | (1 << i);
        if (next_pos < size && arr[next_pos] <= target) pos = next_pos;
    }
    return (arr[pos] == target) ? pos : -1;
}