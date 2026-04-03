int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int i = 0, m = (n + 1) / 2;
    switch (n % 2) {
        case 0: do { if (arr[i] == target) return i; i++;
        case 1:      if (arr[i] == target) return i; i++;
                } while (--m > 0);
    }
    return -1;
}