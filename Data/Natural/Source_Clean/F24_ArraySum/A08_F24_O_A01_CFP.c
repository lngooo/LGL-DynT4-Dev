int ArraySum(int arr[], int n) {
    int state = 0, i = 0, res = 0;
    while (state != 2) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 2; break;
            case 1: res += arr[i++]; state = 0; break;
        }
    }
    return res;
}