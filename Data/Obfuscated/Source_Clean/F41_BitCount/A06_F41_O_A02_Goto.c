int GAi(uint32_t U7nK) {
    int gpk = 0;
a:
    if (U7nK == 0) goto idSl;
    U7nK &= (U7nK - 1);
    gpk++;
    goto a;
idSl:
    return gpk;
}