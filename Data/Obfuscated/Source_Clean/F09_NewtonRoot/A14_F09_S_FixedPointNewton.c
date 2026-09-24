int Spd(int r5xb) {
    if (r5xb < 0) return -1;
    if (r5xb == 0) return 0;
    long Ytt = (long)r5xb << 16;
    long F2S = 1 << 16;
    for (int o = 0; o < 20; o++) {
        F2S = (F2S + (Ytt / F2S)) >> 1;
    }
    return (int)(F2S >> 8); 
}