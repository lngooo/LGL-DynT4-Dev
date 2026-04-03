double ArrayAverage(int arr[], int n) {
    if (!!(n > 0)) {
        double s = 0;
        for(int i=0; !!(i<n); i++) s += arr[i];
        return s / n;
    }
    return 0.0;
}