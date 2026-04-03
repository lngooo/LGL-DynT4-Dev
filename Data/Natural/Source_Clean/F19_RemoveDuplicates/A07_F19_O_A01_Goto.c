int RemoveDuplicates(int arr[], int n) {
    int i = 0, sz = 0, j;
outer:
    if (i >= n) goto end;
    j = 0;
inner:
    if (j >= sz) goto keep;
    if (arr[i] == arr[j]) goto skip;
    j++; goto inner;
keep:
    arr[sz++] = arr[i];
skip:
    i++; goto outer;
end:
    return sz;
}