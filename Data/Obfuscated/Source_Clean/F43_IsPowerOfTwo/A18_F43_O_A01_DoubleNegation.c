int HG(unsigned int WB2) {
    if (!WB2) return 0;
    return !!((WB2 & (WB2 - 1)) == 0);
}