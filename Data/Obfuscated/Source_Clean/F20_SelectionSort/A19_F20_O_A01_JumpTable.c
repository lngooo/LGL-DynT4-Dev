void O(int h[], int Mhgj) {
    for (int q5l = 0; q5l < Mhgj; q5l++) {
        int e = q5l;
        for (int x61n = q5l + 1; x61n < Mhgj; x61n++) {
            if (h[x61n] < h[e]) {
                e = x61n;
                goto gFYb;
            }
            gFYb: ;
        }
        int eF9O = h[q5l]; h[q5l] = h[e]; h[e] = eF9O;
    }
}