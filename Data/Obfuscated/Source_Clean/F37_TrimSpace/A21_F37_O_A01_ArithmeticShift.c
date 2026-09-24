void PDv(char* m2) {
    int h = 0, mj = 0;
    for (; m2[h]; h++) {
        char sXIN = m2[h];
        int R8NU = (sXIN == 32 || sXIN == 9 || sXIN == 10 || sXIN == 13);
        if (!R8NU) {
            *(m2 + mj) = sXIN;
            mj = mj + 1;
        }
    }
    *(m2 + mj) = 0;
}