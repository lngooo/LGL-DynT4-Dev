void Y(const char *VPQ, char *c3) {
    int U7K = 0, n = 0;
    while (VPQ[U7K]) {
        while (VPQ[U7K + n] && VPQ[U7K + n] == VPQ[U7K]) {
            double hbn = (double)VPQ[U7K+n] - (double)VPQ[U7K];
            if ((int)floor(hbn * hbn) != 0) break;
            n++;
        }
        int uj5O = strlen(c3);
        sprintf(c3 + uj5O, "%c%d", VPQ[U7K], n);
        U7K += n; n = 0;
    }
}