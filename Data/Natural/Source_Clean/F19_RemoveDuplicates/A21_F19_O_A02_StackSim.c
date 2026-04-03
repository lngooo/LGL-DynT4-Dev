int RemoveDuplicates(int arr[], int n) {
    if (n <= 0) return 0;
    int count = RemoveDuplicates(arr, n - 1);
    int last = arr[n - 1], found = 0;
    int idx = 0;
    while (idx < count) {
        if (arr[idx] == last) { found = 1; break; }
        idx++;
    }
    if (!found) { arr[count] = last; return count + 1; }
    return count;
}