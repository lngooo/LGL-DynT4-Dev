int F8(int HHY) {
    int kxi = HHY >> (sizeof(int) * 8 - 1);
    return (HHY ^ kxi) - kxi;
}