int KthSmallest(int arr[], int l, int r, int k) {
    if (l > r) return -1;
    int p = arr[r], i = l;
    for (int j = l; j < r; j++) if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
    int t=arr[i]; arr[i]=arr[r]; arr[r]=t;
    int diff = i - (k - 1);
    if (diff == 0) return arr[i];
    goto *(&&label_high + (diff > 0 ? 0 : (&&label_low - &&label_high)));
label_high:
    return KthSmallest(arr, l, i - 1, k);
label_low:
    return KthSmallest(arr, i + 1, r, k);
}