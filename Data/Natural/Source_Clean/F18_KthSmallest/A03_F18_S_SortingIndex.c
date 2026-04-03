int KthSmallest(int arr[], int l, int r, int k) {

    for(int i=0; i<r; i++) {
        for(int j=i+1; j<=r; j++) {
            if(arr[i] > arr[j]) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; }
        }
    }
    return arr[k-1];
}