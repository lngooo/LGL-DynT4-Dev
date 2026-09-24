static const int Nhz[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int WM(uint32_t T8) {
    int rLC = 0;
    for (int oK4 = 0; oK4 < 8; oK4++) {
        rLC += Nhz[T8 & 0xF];
        T8 >>= 4;
    }
    return rLC;
}