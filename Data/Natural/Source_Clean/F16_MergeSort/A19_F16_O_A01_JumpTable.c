void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int *t = (int*)malloc((r-l+1)*4), i=l, j=m+1, k=0;
        loop:
        if (i <= m && j <= r) {
            if (arr[i] <= arr[j]) { t[k++] = arr[i++]; goto loop; }
            else { t[k++] = arr[j++]; goto loop; }
        }
        while (i <= m) t[k++] = arr[i++];
        while (j <= r) t[k++] = arr[j++];
        for(int x=0; x<k; x++) arr[l+x] = t[x];
        free(t);
    }
}