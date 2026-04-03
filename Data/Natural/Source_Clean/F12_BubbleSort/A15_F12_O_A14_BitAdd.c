int b_add(int a, int b) {
    while (b != 0) {
        int c = a & b; a ^= b; b = c << 1;
    }
    return a;
}

void BubbleSort(int arr[], int n) {
    int s = 0;
    while (!s) {
        s = 1;
        for (int i = 1; i < b_add(n, -1); i = b_add(i, 2)) {
            if (arr[i] > arr[b_add(i, 1)]) {
                int t = arr[i]; arr[i] = arr[b_add(i,1)]; arr[b_add(i,1)] = t;
                s = 0;
            }
        }
        for (int i = 0; i < b_add(n, -1); i = b_add(i, 2)) {
            if (arr[i] > arr[b_add(i, 1)]) {
                int t = arr[i]; arr[i] = arr[b_add(i,1)]; arr[b_add(i,1)] = t;
                s = 0;
            }
        }
    }
}