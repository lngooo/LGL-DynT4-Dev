void S(int PDAA[], int w1I) {
    for (int HWvh = 0; HWvh < w1I; HWvh++) {
        int DB = HWvh;
        for (int lJM = HWvh + 1; lJM < w1I; lJM++) {
            for(int IB=0; IB<1; IB++) if (PDAA[lJM] < PDAA[DB]) DB = lJM;
        }
        int s2QS = PDAA[HWvh]; PDAA[HWvh] = PDAA[DB]; PDAA[DB] = s2QS;
    }
}