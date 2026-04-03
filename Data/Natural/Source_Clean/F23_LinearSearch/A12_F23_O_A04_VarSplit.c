int LinearSearch(int arr[], int n, int target) {
    int head = 0, tail = n - 1;
    while (head <= tail) {
        int left_val = arr[head];
        int right_val = arr[tail];
        if (left_val == target) return head;
        if (right_val == target) return tail;
        head += 1; tail -= 1;
    }
    return -1;
}