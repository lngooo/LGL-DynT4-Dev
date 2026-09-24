long Q8W(int Ud9s) {
    static long wgK[101] = {0};
    if (Ud9s <= 1) return (long)Ud9s;
    if (wgK[Ud9s] != 0) return wgK[Ud9s];
    return wgK[Ud9s] = Q8W(Ud9s - 1) + Q8W(Ud9s - 2);
}