#define SWP(x,y) {int _t=x; x=y; y=_t;}
#define REV_RANGE(a,s,e) {int _s=s, _e=e; while(_s<_e){SWP(a[_s],a[_e]); _s++; _e--;}}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    int rk = k % n;
    REV_RANGE(arr, 0, rk-1);
    REV_RANGE(arr, rk, n-1);
    REV_RANGE(arr, 0, n-1);
}