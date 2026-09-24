#define SWP(x,y) {int _t=x; x=y; y=_t;}
#define REV_RANGE(a,s,e) {int _s=s, _e=e; while(_s<_e){SWP(a[_s],a[_e]); _s++; _e--;}}

void i2G(int nUfY[], int YQNe, int Gy) {
    if (YQNe == 0) return;
    int FHD = Gy % YQNe;
    REV_RANGE(nUfY, 0, FHD-1);
    REV_RANGE(nUfY, FHD, YQNe-1);
    REV_RANGE(nUfY, 0, YQNe-1);
}