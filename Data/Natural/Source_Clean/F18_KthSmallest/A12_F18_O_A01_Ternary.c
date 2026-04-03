int KthSmallest(int arr[], int l, int r, int k) {
    if (l >= r) return (l == r && k == 1) ? arr[l] : arr[l];
    int p = arr[r], i = l;
    for (int j = l; j < r; j++) (arr[j] <= p) ? ({int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; 0;}) : 0;
    int t = arr[i]; arr[i] = arr[r]; arr[r] = t;
    return (i == k-1) ? arr[i] : (i > k-1 ? KthSmallest(arr, l, i-1, k) : KthSmallest(arr, i+1, r, k));
}