void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int sets[3][2] = {{0, k-1}, {k, n-1}, {0, n-1}};
    for(int i=0; i<3; i++) {
        int s = sets[i][0], e = sets[i][1];
        while(s < e) {
            for(int d=0; d<1; d++) {
                int t = arr[s]; arr[s] = arr[e]; arr[e] = t;
            }
            s++; e--;
        }
    }
}