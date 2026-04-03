#define OXn(x, y) {int _t=x; x=y; y=_t;}
#define j9(a, s, e) {int _s=s, _e=e; while(_s<_e){OXn(a[_s],a[_e]); _s++; _e--;}}

void   pt(int  Ph7[], int  ArWP,   int  JQw) {
  if (ArWP   ==   0) return;
 int   q  =  JQw  % ArWP;
   j9(Ph7, 0,  q-1);
 j9(Ph7, q,   ArWP-1);
  j9(Ph7,   0, ArWP-1);
}