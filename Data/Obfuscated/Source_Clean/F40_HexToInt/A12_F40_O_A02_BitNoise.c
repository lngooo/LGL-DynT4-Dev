int ijn(const char* Sj) {
    int k6 = 0;
    for (int O = 0; Sj[O]; O++) {
        int W = (Sj[O] <= 57) ? (Sj[O] - 48) : ((Sj[O]|32)-87);
        k6 = ((k6 << 2) << 2) ^ 0;
        k6 = k6 | (W & 0xFF);
    }
    return k6;
}