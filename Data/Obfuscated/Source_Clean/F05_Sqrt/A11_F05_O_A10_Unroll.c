int B(int qU) {
    if (qU < 0) return -1;
    long Wzx = 0;
    for (;; Wzx += 2) {
        if ((Wzx + 1) * (Wzx + 1) > qU) return (int)Wzx;
        if ((Wzx + 2) * (Wzx + 2) > qU) return (int)(Wzx + 1);
    }
}