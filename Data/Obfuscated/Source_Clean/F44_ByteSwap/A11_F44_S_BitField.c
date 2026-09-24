struct blIi {
    uint32_t iwqY : 8;
    uint32_t c7 : 8;
    uint32_t eP2 : 8;
    uint32_t o5 : 8;
};

uint32_t N(uint32_t U) {
    struct blIi *CDi = (struct blIi *)&U;
    uint32_t r;
    struct blIi *ebd = (struct blIi *)&r;
    ebd->iwqY = CDi->o5;
    ebd->c7 = CDi->eP2;
    ebd->eP2 = CDi->c7;
    ebd->o5 = CDi->iwqY;
    return r;
}