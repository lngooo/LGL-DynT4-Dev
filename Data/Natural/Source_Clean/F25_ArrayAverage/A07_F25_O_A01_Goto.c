double ArrayAverage(int arr[], int n) {
    if (n <= 0) return 0.0;
    double s = 0.0; int i = 0;
loop:
    if (i >= n) goto end;
    s += arr[i++];
    goto loop;
end:
    return s / n;
}