int M(unsigned int Uins, unsigned int hN) {
    unsigned int T7 = Uins ^ hN;
    int Zjle = 0;
    int lb = 0;
    while (lb != -1) {
        switch (lb) {
            case 0:
                if (T7 > 0) lb = 1; else lb = -1;
                break;
            case 1:
                if (T7 & 1) Zjle++;
                T7 >>= 1;
                lb = 0;
                break;
        }
    }
    return Zjle;
}