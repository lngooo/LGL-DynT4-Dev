int Z32J(int d, int f) {
    while (f != 0) {
        int kA = d & f;
        d = d ^ f;
        f = kA << 1;
    }
    return d;
}

int En3z(int k) {
    int ayq7 = 0;
    for (int sBS9 = 1; sBS9 <= k; sBS9++) {
        ayq7 = Z32J(ayq7, sBS9);
    }
    return ayq7;
}