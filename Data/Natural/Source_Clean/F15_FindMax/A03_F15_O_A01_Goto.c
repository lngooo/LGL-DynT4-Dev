int FindMax(int arr[], int n) {
    int i = 1, max = arr[0];
loop:
    if (i >= n) goto end;
    if (arr[i] <= max) goto next;
    max = arr[i];
next:
    i++;
    goto loop;
end:
    return max;
}