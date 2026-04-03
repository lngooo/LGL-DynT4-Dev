void ArrayReverse(int arr[], int size) {
    int s = 0, e = size - 1, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (s < e) ? 1 : 2; break;
            case 1: { int t = arr[s]; arr[s] = arr[e]; arr[e] = t; s++; e--; state = 0; break; }
            case 2: state = -1; break;
        }
    }
}