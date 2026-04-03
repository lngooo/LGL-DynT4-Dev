void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    if (k == 0) return;
    int count = 0;
    for (int start = 0; count < n; start++) {
        int curr = start;
        int prev_val = arr[start];
        do {
            int next_idx = (curr - k + n) % n;
            int temp = arr[next_idx];
            arr[next_idx] = prev_val;
            prev_val = temp;
            curr = next_idx;
            count++;
        } while (start != curr);
    }
}