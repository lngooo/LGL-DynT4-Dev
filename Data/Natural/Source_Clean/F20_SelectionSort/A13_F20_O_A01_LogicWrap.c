void SelectionSort(int arr[], int n) {
    int cur = 0;
    while (cur < n) {
        int smallest = cur;
        for (int k = cur + 1; k < n; k++) {
            int flag = (arr[k] < arr[smallest]);
            switch(flag) { case 1: smallest = k; break; default: break; }
        }
        int t = arr[cur]; arr[cur] = arr[smallest]; arr[smallest] = t;
        cur++;
    }
}