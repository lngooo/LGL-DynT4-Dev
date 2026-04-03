void rev(int a[], int s, int e) {
    int st = 0;
    while (st != -1) {
        switch(st) {
            case 0: st = (s < e) ? 1 : -1; break;
            case 1: { int t = a[s]; a[s] = a[e]; a[e] = t; s++; e--; st = 0; break; }
        }
    }
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int phase = 1;
    while(phase <= 3) {
        if(phase == 1) rev(arr, 0, k-1);
        else if(phase == 2) rev(arr, k, n-1);
        else rev(arr, 0, n-1);
        phase++;
    }
}