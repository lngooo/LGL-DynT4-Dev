int GPhZ(int kpD[], int a) {
    int R = 0, HE3y = 0;
Y:
    if (HE3y >= a) return R;
    R += kpD[HE3y++];
    goto Y;
}