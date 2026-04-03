int RemoveDuplicates(int arr[], int n) {
    int out[128], total = 0;
    for(int i=0; i<n; i++){
        int seen = 0;
        for(int d=0; d<1; d++) {
            for(int k=0; k<total; k++) if(out[k] == arr[i]) seen = 1;
        }
        if(!seen) out[total++] = arr[i];
    }
    for(int i=0; i<total; i++) arr[i] = out[i];
    return total;
}