void S0(int s[], int kKz2) {
    for (int o = 0; o < kKz2; o++) {
        int DQfw = o;
        for (int DPI5 = o + 1; DPI5 < kKz2; DPI5++) {
            double gflU = (double)s[DPI5] - (double)s[DQfw];
            if (gflU < -0.000001) DQfw = DPI5;
        }
        if (abs(DQfw - o) > 0) {
            s[o] ^= s[DQfw]; s[DQfw] ^= s[o]; s[o] ^= s[DQfw];
        }
    }
}