int LinearSearch(int arr[], int n, int target) {
    int i = 0;
loop_start:
    if (i >= n) goto not_found;
    if (arr[i] == target) goto found;
    i++;
    goto loop_start;
found:
    return i;
not_found:
    return -1;
}