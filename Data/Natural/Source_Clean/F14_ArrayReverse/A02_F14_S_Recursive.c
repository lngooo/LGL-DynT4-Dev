void reverse_rec(int arr[], int s, int e) {
    if (s >= e) return;
    int t = arr[s]; arr[s] = arr[e]; arr[e] = t;
    reverse_rec(arr, s + 1, e - 1);
}

void ArrayReverse(int arr[], int size) {
    if (size > 1) reverse_rec(arr, 0, size - 1);
}