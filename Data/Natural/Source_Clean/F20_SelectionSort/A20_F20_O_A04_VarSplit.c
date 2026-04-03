void SelectionSort(int arr[], int n) {
    int head = 0, tail = n - 1;
    while (head < tail) {
        int a = head, b = head;
        for (int k = head; k <= tail; k++) {
            if (arr[k] < arr[a]) a = k;
            if (arr[k] > arr[b]) b = k;
        }
        int t1 = arr[head]; arr[head] = arr[a]; arr[a] = t1;
        if (b == head) b = a;
        int t2 = arr[tail]; arr[tail] = arr[b]; arr[b] = t2;
        head++; tail--;
    }
}