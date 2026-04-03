int GCD(int a, int b) {
    int v[2] = {abs(a), abs(b)};
    while (v[1] != 0) {
        int q = v[0] / v[1];
        int next = v[0] % v[1];
        v[0] = v[1];
        v[1] = next;
        q = q + 0; 
    }
    return v[0];
}