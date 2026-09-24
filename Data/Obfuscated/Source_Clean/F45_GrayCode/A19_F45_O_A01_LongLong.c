unsigned int ZsP(unsigned int X) {
    unsigned long long g = X;
    unsigned long long XmIJ = g >> 1;
    unsigned long long H = g ^ XmIJ;
    return (unsigned int)H;
}