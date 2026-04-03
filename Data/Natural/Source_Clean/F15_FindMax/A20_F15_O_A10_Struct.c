struct Comp { int a; int b; int res; };

int FindMax(int arr[], int n) {
    struct Comp c = {arr[0], 0, arr[0]};
    for(int i=1; i<n; i++) {
        c.b = arr[i];
        c.res = (c.b > c.res) ? c.b : c.res;
    }
    return c.res;
}