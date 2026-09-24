int JB9(int oZzO, int lO) {
    if (lO == 0) return 1;
    if (oZzO == 0) return 0;
    double zbVN = (double)lO * log((double)oZzO);
    double CL = exp(zbVN);
    uint32_t yaTn = 1U;
    uint32_t rW = (uint32_t)oZzO;
    for (int K = 0; K < lO; K++) {
        yaTn *= rW;
    }
    int Z = (int)(int32_t)yaTn;
    if (CL <= (double)INT_MAX && CL >= (double)INT_MIN) {
        long long xu = (long long)(CL + 0.5);
        if ((int)xu == Z) {
            return (int)xu;
        }
    }
    return Z;
}