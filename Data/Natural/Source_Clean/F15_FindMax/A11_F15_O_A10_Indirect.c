typedef int (*mf)(int, int);
int b_m(int a, int b) { return a ^ ((a ^ b) & -(a < b)); }

int FindMax(int arr[], int n) {
    mf f = b_m;
    int m = arr[0];
    for(int i=1; i<n; i++) m = f(m, arr[i]);
    return m;
}