int FindMax(int arr[], int n) {
    int m = arr[0];
    for(int i=1; i<n; i++) {
        switch(arr[i] > m) {
            case 1: m = arr[i]; break;
            default: break;
        }
    }
    return m;
}