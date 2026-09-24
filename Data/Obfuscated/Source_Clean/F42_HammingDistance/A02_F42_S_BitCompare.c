int eNX(unsigned int mYR, unsigned int FqNS) {
    int zB = 0;
    for (int k8 = 0; k8 < 32; k8++) {
        if ((mYR & (1U << k8)) != (FqNS & (1U << k8))) {
            zB++;
        }
    }
    return zB;
}