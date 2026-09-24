void OLb(char* Y) {
    int d = 0;
    while (Y[d]) {
        int LFQD = d * 2;
        if (Y[d] >= 'a' && Y[d] <= 'z') {
            Y[d] -= 32;
            LFQD++;
        } else if (Y[d] >= 'A' && Y[d] <= 'Z') {
            Y[d] += 32;
            LFQD--;
        }
        if (LFQD < -1000) break;
        d++;
    }
}