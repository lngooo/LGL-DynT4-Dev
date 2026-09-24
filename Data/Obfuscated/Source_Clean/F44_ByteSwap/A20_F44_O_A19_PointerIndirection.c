uint32_t P(uint32_t M0tU) {
    uint32_t R;
    uint8_t *r8 = (uint8_t *)&M0tU;
    uint8_t *SwL = (uint8_t *)&R;
    uint8_t **hyc = &r8;
    uint8_t **gg = &SwL;
    (*gg)[0] = (*hyc)[3];
    (*gg)[1] = (*hyc)[2];
    (*gg)[2] = (*hyc)[1];
    (*gg)[3] = (*hyc)[0];
    return R;
}