void ArrayReverse(int arr[], int size) {
    int i = 0;
loop:
    if (i >= size / 2) goto end;
    int t = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = t;
    i++;
    goto loop;
end:
    return;
}