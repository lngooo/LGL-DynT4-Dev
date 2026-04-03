void InsertionSort(int arr[], int n) {
    int cursor = 1;
    while (cursor < n) {
        int val = arr[cursor], pos = cursor - 1;
        while (pos >= 0) {
            int cmp = (arr[pos] > val);
            if (cmp) { arr[pos+1] = arr[pos]; pos--; }
            else break;
        }
        arr[pos+1] = val;
        cursor++;
    }
}