int xNo(int iE) {
    if (iE <= 1) return 0;
    for (int DV = 2; DV * DV <= iE; DV++) {
        if (iE % DV == 0) return 0;
    }
    return 1;
}