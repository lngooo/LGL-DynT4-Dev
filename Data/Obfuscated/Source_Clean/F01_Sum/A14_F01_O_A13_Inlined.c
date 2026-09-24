int eGp(int QFn) {
    int U7 = 0;
pYEZ:
    if (QFn <= 0) return U7;
    U7 += QFn;
    QFn--;
    goto pYEZ;
}