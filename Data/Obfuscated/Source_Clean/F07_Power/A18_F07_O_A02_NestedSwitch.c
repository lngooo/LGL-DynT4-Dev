int B(int Ee, int exp) {
    int yf = 1, g = 0, x4t = 10;
    while(x4t != 0) {
        switch(x4t) {
            case 10: x4t = (g < exp) ? 20 : 0; break;
            case 20: yf *= Ee; g++; x4t = 10; break;
        }
    }
    return yf;
}