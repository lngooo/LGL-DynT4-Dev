int Kdxu(unsigned int J3) {
    if (J3 == 0) return 0;
    int BLno = 0, fO1 = 0;
    while (J3 > 0) {
        BLno += (J3 & 1);
        J3 >>= 1;
        if (J3 > 0) {
            fO1 += (J3 & 1);
            J3 >>= 1;
        }
    }
    return (BLno + fO1) == 1;
}