int Log2(int n) {
    int low = 0, high = 31, res = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if ((1ULL << mid) <= (unsigned int)n) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return res;
}