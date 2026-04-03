struct Range { int low; int high; int s; };

void BubbleSort(int arr[], int n) {
    struct Range r = {0, n - 1, 1};
    while (r.s) {
        r.s = 0;
        for (int i = r.low; i < r.high; i++) {
            if (arr[i] > arr[i+1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                r.s = 1;
            }
        }
        if (!r.s) break;
        r.s = 0; r.high--;
        for (int i = r.high - 1; i >= r.low; i--) {
            if (arr[i] > arr[i+1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                r.s = 1;
            }
        }
        r.low++;
    }
}