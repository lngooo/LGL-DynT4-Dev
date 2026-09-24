int F(int voA[], int RWzW, int uLb, int vK) {
    while (RWzW <= uLb) {
        int yn8z = voA[uLb], I = RWzW;
        for (int mEgv = RWzW; mEgv < uLb; mEgv++) {
            if (voA[mEgv] <= yn8z) {
                int O5tf = voA[I]; voA[I] = voA[mEgv]; voA[mEgv] = O5tf;
                I++;
            }
        }
        int O5tf = voA[I]; voA[I] = voA[uLb]; voA[uLb] = O5tf;
        if (I == vK - 1) return voA[I];
        else if (I > vK - 1) uLb = I - 1;
        else RWzW = I + 1;
    }
    return -1;
}