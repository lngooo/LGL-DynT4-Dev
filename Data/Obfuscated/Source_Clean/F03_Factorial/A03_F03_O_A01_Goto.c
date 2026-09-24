long long f(int R1) {
    if (R1 < 0) return 0;
    long long W = 1;
    int KcW = 1;
EH:
    if (KcW > R1) goto rlLB;
    W *= KcW;
    KcW++;
    goto EH;
rlLB:
    return W;
}