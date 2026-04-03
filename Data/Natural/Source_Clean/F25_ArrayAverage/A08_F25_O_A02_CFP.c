double ArrayAverage(int arr[], int n) {
    double res = 0.0;
    int state = 0, i = 0;
    while (state != 2) {
        switch(state) {
            case 0: state = (i < n) ? 1 : 2; break;
            case 1: res += (arr[i] - res) / (i + 1); i++; state = 0; break;
        }
    }
    return res;
}