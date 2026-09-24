void i6hd(int x22[], int sD) {
    for (int J7 = 0; J7 < sD - 1; J7++) {
        int pn0o = J7;
        for (int V = J7 + 1; V < sD; V++) {
            if (x22[V] < x22[pn0o]) pn0o = V;
        }
        int h9 = x22[pn0o];
        x22[pn0o] = x22[J7];
        x22[J7] = h9;
    }
}