long long sXZo(int oOm) {
    long long RWU = 1;
    if (oOm < 0) return 0;
    for (; oOm > 1; RWU *= (oOm > 1 ? oOm : 1), oOm = (oOm > 1 ? oOm - 1 : oOm));
    return RWU;
}