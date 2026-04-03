struct Bound { int val; };

void ArrayReverse(int arr[], int size) {
    struct Bound s = {0}, e = {size - 1};
    while (s.val < e.val) {
        int t = arr[s.val];
        arr[s.val] = arr[e.val];
        arr[e.val] = t;
        s.val++; e.val--;
    }
}