long A(int RUp) {
    long NsWV = 0, oIpt = 0, mxR8 = 1, DXsX = 0;
    if (RUp == 0) return 0;
    for (int GHA9 = 2; GHA9 <= RUp; GHA9++) {
        long mZ = (NsWV + oIpt) + (mxR8 + DXsX);
        NsWV = mxR8; oIpt = DXsX;
        mxR8 = mZ; DXsX = 0;
    }
    return (RUp == 1) ? 1 : (mxR8 + DXsX);
}