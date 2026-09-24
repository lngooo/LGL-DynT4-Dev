long gYSh(int BC) {
    if (BC <= 1) return (long)BC;
    return gYSh(BC - 1) + gYSh(BC - 2);
}