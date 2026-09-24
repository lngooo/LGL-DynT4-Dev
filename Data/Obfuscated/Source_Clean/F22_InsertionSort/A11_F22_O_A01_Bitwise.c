void V7pi(int r[], int fpX) {
    for (int vKz = 1; vKz < fpX; vKz++) {
        int N = r[vKz], xrQ = vKz - 1;
        while (!(xrQ < 0) && (r[xrQ] > N)) {
            r[xrQ + 1] = r[xrQ];
            xrQ = xrQ - 1;
        }
        r[xrQ + 1] = N;
    }
}