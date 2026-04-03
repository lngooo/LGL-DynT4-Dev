int ArraySum(int arr[], int n) {
    int s = 0, i = 0;
loop:
    if (i >= n) goto end;
    s += arr[i];
    i++;
    goto loop;
end:
    return s;
}