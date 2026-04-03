int BinarySearch(int arr[], int size, int target) {
    long long s = size, t = target;
    long long step = sqrt(s), p = 0;
    while (arr[(step < s ? step : s) - 1] < t) {
        p = step; step += sqrt(s);
        if (p >= s) return -1;
    }
    while (arr[p] < t) {
        p++;
        if (p == (step < s ? step : s)) return -1;
    }
    return (arr[p] == t) ? (int)p : -1;
}