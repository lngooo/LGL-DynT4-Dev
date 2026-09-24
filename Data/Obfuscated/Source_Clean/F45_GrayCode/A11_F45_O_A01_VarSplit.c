unsigned int fkN(unsigned int X) {
    unsigned int JS = X & 0xFFFF0000;
    unsigned int gJh = X & 0x0000FFFF;
    unsigned int eOlY = (JS | gJh) >> 1;
    return (JS | gJh) ^ eOlY;
}