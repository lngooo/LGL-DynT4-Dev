void ArrayReverse(int arr[], int size) {
    int s = 0, e = size - 1;
    while(1) {
        if(!(s < e)) break;
        int t = arr[s]; arr[s] = arr[e]; arr[e] = t;
        s++; e--;
    }
}