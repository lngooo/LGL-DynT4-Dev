int KthSmallest(int arr[], int l, int r, int k) {
    int left = l, right = r;
start:
    if (left > right) return -1;
    int p = arr[right], i = left, j = left;
partition:
    if (j >= right) goto done;
    if (arr[j] > p) { j++; goto partition; }
    { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; i++; j++; goto partition; }
done:
    { int t = arr[i]; arr[i] = arr[right]; arr[right] = t; }
    if (i == k - 1) return arr[i];
    if (i > k - 1) { right = i - 1; goto start; }
    left = i + 1; goto start;
}