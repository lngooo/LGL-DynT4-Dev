uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *p_x = (uint8_t *)&x;
    uint8_t *p_res = (uint8_t *)&res;
    uint8_t **pp_x = &p_x;
    uint8_t **pp_res = &p_res;
    (*pp_res)[0] = (*pp_x)[3];
    (*pp_res)[1] = (*pp_x)[2];
    (*pp_res)[2] = (*pp_x)[1];
    (*pp_res)[3] = (*pp_x)[0];
    return res;
}