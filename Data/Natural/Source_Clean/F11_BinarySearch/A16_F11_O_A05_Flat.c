int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    int i = 1, st = 0, l, r, m;
    while (st != -1) {
        switch(st) {
            case 0: if (arr[0] == target) return 0; st = 1; break;
            case 1: if (i < size && arr[i] <= target) { i *= 2; } else { l = i/2; r = (i < size) ? i : size-1; st = 2; } break;
            case 2: if (l <= r) { m = l + (r-l)/2; if(arr[m] == target) return m; if(arr[m] < target) l = m + 1; else r = m - 1; } else return -1; break;
        }
    }
    return -1;
}