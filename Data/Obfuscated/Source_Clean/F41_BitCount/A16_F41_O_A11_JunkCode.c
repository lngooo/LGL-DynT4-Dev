int f(uint32_t Tk9k) {
    int sd = 0;
    uint32_t dC0 = 0xABCDE;
    for (int qQ4I = 0; qQ4I < 32; qQ4I++) {
        dC0 = (dC0 * 3) + qQ4I;
        if (Tk9k % 2 != 0) sd++;
        Tk9k /= 2;
    }
    if (dC0 == 0) printf("%u", dC0); 
    return sd;
}