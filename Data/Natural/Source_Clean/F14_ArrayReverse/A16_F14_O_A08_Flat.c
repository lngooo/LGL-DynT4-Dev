void ArrayReverse(int arr[], int size) {
    if (size < 2) return;
    int i = 0, st = 10;
    while(st != 0) {
        switch(st) {
            case 10: { int t = arr[i]; arr[i] = arr[size-1-i]; arr[size-1-i] = t; i++; st = 20; break; }
            case 20: st = (i < size / 2) ? 10 : 0; break;
        }
    }
}