int S(unsigned int p0) {
    int B7 = 1;
    int G = 0;
    while (B7 != 0) {
        switch (B7) {
            case 1:
                B7 = (p0 == 0) ? 2 : 3;
                break;
            case 2:
                G = 0; B7 = 0;
                break;
            case 3:
                G = ((p0 & (p0 - 1)) == 0);
                B7 = 0;
                break;
        }
    }
    return G;
}