void MergeSort(int arr[], int l, int r) {
    int state = 0;
    while (state != 2) {
        switch (state) {
            case 0: if (l < r) state = 1; else state = 2; break;
            case 1: {
                int m = l + (r - l) / 2;
                MergeSort(arr, l, m);
                MergeSort(arr, m + 1, r);
                int *t = (int*)malloc((r-l+1)*4);
                int i=l, j=m+1, k=0;
                while(i<=m && j<=r) t[k++] = (arr[i]<=arr[j]) ? arr[i++] : arr[j++];
                while(i<=m) t[k++] = arr[i++]; while(j<=r) t[k++] = arr[j++];
                for(int x=0; x<k; x++) arr[l+x] = t[x];
                free(t); state = 2; break;
            }
        }
    }
}