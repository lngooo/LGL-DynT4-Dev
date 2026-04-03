int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a <= 3 && b <= 3) {
        static int map[4][4] = {{0,1,2,3},{1,1,1,1},{2,1,2,1},{3,1,1,3}};
        return map[a][b];
    }
    return b == 0 ? a : GCD(b, a % b);
}