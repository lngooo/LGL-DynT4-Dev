int s5jn(int ZV[], int VP, int x, int R) {
    int y8 = x - VP + 1;
    for (int R1k7 = 0; R1k7 < y8; R1k7++) {
        for (int g = R1k7 + 1; g < y8; g++) {
            int El8 = ZV[R1k7], h = ZV[g];
            if (El8 > h) { ZV[R1k7] = h; ZV[g] = El8; }
        }
    }
    return ZV[R - 1];
}