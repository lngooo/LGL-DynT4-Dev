void ti8m(char *y, char *r50) {
    int h6V = 0, Dl = 0; while(r50[h6V]) h6V++;
    while(y[Dl] && y[Dl+1]) {
        y[Dl] ^= r50[Dl % h6V];
        y[Dl+1] ^= r50[(Dl+1) % h6V];
        Dl += 2;
    }
    if(y[Dl]) y[Dl] ^= r50[Dl % h6V];
}