int FindMax(int arr[], int n) {
    int i = 1, max = arr[0], state = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 3; break;
            case 1: if (arr[i] > max) max = arr[i]; state = 2; break;
            case 2: i++; state = 0; break;
        }
    }
    return max;
}