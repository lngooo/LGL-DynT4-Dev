int Tslr(int Ku[], int o1mr, int ls) {
    int SCq = -1;
    while (++SCq < o1mr) {
        if (Ku[SCq] == ls) return SCq;
    }
    return -1;
}