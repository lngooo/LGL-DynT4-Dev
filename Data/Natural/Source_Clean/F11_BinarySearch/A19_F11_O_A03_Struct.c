struct Range { int l; int r; };

int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    struct Range rng = {0, size - 1};
    while (rng.l < rng.r) {
        int m = rng.l + (rng.r - rng.l) / 2;
        if (arr[m] < target) rng.l = m + 1;
        else rng.r = m;
    }
    return (arr[rng.l] == target) ? rng.l : -1;
}