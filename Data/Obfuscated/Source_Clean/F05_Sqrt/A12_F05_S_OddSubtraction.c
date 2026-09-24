int xJ(int eyG) {
    if (eyG < 0) return -1;
    int WJr0 = 0, i = 1;
    while (eyG >= i) {
        eyG -= i;
        i += 2;
        WJr0++;
    }
    return WJr0;
}