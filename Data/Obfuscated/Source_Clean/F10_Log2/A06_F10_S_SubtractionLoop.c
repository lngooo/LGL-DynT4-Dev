int v5(int wWmk) {
    int booU = -1;
    unsigned int nU = 1;
    while (nU <= (unsigned int)wWmk && nU > 0) {
        nU <<= 1;
        booU++;
        if (nU > (unsigned int)wWmk) break;
    }
    return booU;
}