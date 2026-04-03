int KthSmallest(int arr[], int l, int r, int k) {
    int state = 0;
    while (state != 2) {
        switch (state) {
            case 0: if (l <= r) state = 1; else state = 2; break;
            case 1: {
                int p = arr[r], i = l;
                for (int j = l; j < r; j++) if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
                int t=arr[i]; arr[i]=arr[r]; arr[r]=t;
                if (i == k - 1) return arr[i];
                if (i > k - 1) r = i - 1; else l = i + 1;
                state = 0; break;
            }
        }
    }
    return -1;
}