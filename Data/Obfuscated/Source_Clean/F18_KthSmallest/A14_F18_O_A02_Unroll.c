int O(int fs[], int y, int v, int L) {
    while (y <= v) {
        int EF = fs[v], a = y, Q = y;
        for (; Q < v - 1; Q += 2) {
            if (fs[Q] <= EF) { int g=fs[a]; fs[a]=fs[Q]; fs[Q]=g; a++; }
            if (fs[Q+1] <= EF) { int g=fs[a]; fs[a]=fs[Q+1]; fs[Q+1]=g; a++; }
        }
        for (; Q < v; Q++) if (fs[Q] <= EF) { int g=fs[a]; fs[a]=fs[Q]; fs[Q]=g; a++; }
        int g=fs[a]; fs[a]=fs[v]; fs[v]=g;
        if (a == L - 1) return fs[a];
        if (a > L - 1) v = a - 1; else y = a + 1;
    }
    return -1;
}