long X(int icw) {
    long Pl1[2] = {0, 1};
    if (icw == 0) return 0;
    for (int SEOl = 2; SEOl <= icw; SEOl++) {
        Pl1[SEOl % 2] = Pl1[0] + Pl1[1];
    }
    return Pl1[icw % 2];
}