void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int i = 0, j;
outer:
    if (i >= k) goto end;
    int temp = arr[0];
    j = 0;
inner:
    if (j >= n - 1) goto put;
    arr[j] = arr[j + 1];
    j++;
    goto inner;
put:
    arr[n - 1] = temp;
    i++;
    goto outer;
end:
    return;
}