int unDu(int W4y, int W81) {
    long long q1fE = abs(W4y), V = abs(W81);
    if (!(q1fE && V)) return (int)(q1fE | V);
    long long w = (q1fE > V) ? q1fE : V;
    long long Pe = w;
    while ((Pe % q1fE) | (Pe % V)) { Pe += w; }
    return (int)((q1fE * V) / Pe);
}