int fIU(int dr, int RMMc) {
    return (RMMc * RMMc > dr) ? 1 : (dr % RMMc == 0 ? 0 : fIU(dr, RMMc + 1));
}

int m(int dr) {
    return (dr < 2) ? 0 : fIU(dr, 2);
}