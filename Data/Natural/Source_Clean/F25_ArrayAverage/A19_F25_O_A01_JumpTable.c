double ArrayAverage(int arr[], int n) {
    double s = 0; int i = 0;
start:
    if (i < n) { s += arr[i++]; goto start; }
    return s / n;
}