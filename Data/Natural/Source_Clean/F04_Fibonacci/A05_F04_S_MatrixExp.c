long Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long m[2][2] = {{1, 1}, {1, 0}}, r[2][2] = {{1, 1}, {1, 0}};
    for (int i = 1; i < n - 1; i++) {
        long x = r[0][0]*m[0][0] + r[0][1]*m[1][0];
        long y = r[0][0]*m[0][1] + r[0][1]*m[1][1];
        long z = r[1][0]*m[0][0] + r[1][1]*m[1][0];
        long w = r[1][0]*m[0][1] + r[1][1]*m[1][1];
        r[0][0]=x; r[0][1]=y; r[1][0]=z; r[1][1]=w;
    }
    return r[0][0];
}