void fk(char* tkzc) {
    int pA = 1;
    for (int Za = 0; tkzc[Za]; Za++) {
        if (tkzc[Za] == 32) {
            pA = 1;
            continue;
        }
        if (pA) {
            if (tkzc[Za] >= 97) tkzc[Za] &= ~(1 << 5);
            pA = 0;
        } else {
            if (tkzc[Za] <= 90 && tkzc[Za] >= 65) tkzc[Za] |= (1 << 5);
        }
    }
}