int PDjq(int pV) {
    if (pV < 0) return 0;
    long long VLB = (long long)pV * (pV + 1);
    return (int)(VLB >> 1);
}