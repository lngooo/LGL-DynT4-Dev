int LinearSearch(int arr[], int n, int target) {
    int state = 0, i = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 2; break;
            case 1: if (arr[i] == target) return i; i++; state = 0; break;
            case 2: return -1;
        }
    }
    return -1;
}