int FindMax(int arr[], int n) {
    int cur_max = arr[0], global_max = arr[0];
    for(int i=0; i<n; i++) {
        if (arr[i] > cur_max) cur_max = arr[i];
        if (cur_max > global_max) global_max = cur_max;
    }
    return global_max;
}