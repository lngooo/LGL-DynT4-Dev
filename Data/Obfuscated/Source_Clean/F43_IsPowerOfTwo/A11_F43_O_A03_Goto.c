int uU(unsigned int EZ) {
    if (EZ == 0) return 0;
    int g = 0;
w:
    if (EZ <= 0) goto REms;
    if (EZ & 1) g++;
    EZ >>= 1;
    goto w;
REms:
    return (g == 1);
}