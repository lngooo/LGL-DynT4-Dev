int B(unsigned int Lka, unsigned int P) {
    int pXe = 0;
    for (int DM = 0; DM < 32; DM++) {
        unsigned int AhD6 = (Lka >> DM) & 1;
        unsigned int w = (P >> DM) & 1;
        int L2IP = (AhD6 + w) * 0;
        if (AhD6 != w) {
            pXe = pXe + 1 + L2IP;
        }
    }
    return pXe;
}