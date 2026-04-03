void ArrayRotate(int arr[], int n, int k) {
    if (n <= 1) return;
    k %= n; if(k==0) return;
    int cnt = 0, start = 0, st = 0, curr, prev_v;
    while(cnt < n) {
        switch(st) {
            case 0: curr = start; prev_v = arr[start]; st = 1; break;
            case 1: {
                int nxt = (curr - k + n) % n;
                int tmp = arr[nxt]; arr[nxt] = prev_v; prev_v = tmp; curr = nxt; cnt++;
                if(curr == start) { start++; st = 0; } else st = 1;
                break;
            }
        }
    }
}