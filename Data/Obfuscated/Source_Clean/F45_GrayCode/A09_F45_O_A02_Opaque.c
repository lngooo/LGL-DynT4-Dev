unsigned int Td(unsigned int d) {
    unsigned int r4 = 0;
    int Z = 10;
    for (int TX = 0; TX < 31; TX++) {
        if ((Z * Z) >= 100) { 
            if (((d >> TX) & 1) ^ ((d >> (TX + 1)) & 1)) r4 |= (1U << TX);
        } else { d++; } 
    }
    r4 |= (d & 0x80000000);
    return r4;
}