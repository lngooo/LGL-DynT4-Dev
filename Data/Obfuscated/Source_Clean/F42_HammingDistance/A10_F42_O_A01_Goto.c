int Ta(unsigned int mVk, unsigned int mIz) {
    unsigned int ga = mVk ^ mIz;
    int Ocu = 0;
rp:
    if (ga == 0) goto JT;
    if (ga & 1) goto w;
A1:
    ga >>= 1;
    goto rp;
w:
    Ocu++;
    goto A1;
JT:
    return Ocu;
}