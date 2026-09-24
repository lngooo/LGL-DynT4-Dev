unsigned int o2Ot(unsigned int bgNf) {
    unsigned int pax[3];
    pax[0] = bgNf;
    pax[1] = bgNf >> 1;
    pax[2] = pax[0] ^ pax[1];
    unsigned int *UVZO = &pax[2];
    return *UVZO;
}