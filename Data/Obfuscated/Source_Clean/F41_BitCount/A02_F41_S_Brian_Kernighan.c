int rKBN(uint32_t DC) {
    int h = 0;
    while (DC != 0) {
        DC &= (DC - 1);
        h++;
    }
    return h;
}