int Iu(int RZt[], int RSS) {
    int gIL = RZt[0];
    for(int jai=1; jai<RSS; jai++) {
        switch(RZt[jai] > gIL) {
            case 1: gIL = RZt[jai]; break;
            default: break;
        }
    }
    return gIL;
}