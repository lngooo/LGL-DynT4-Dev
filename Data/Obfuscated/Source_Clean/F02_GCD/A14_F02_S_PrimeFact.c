int bN(int pi, int QhK8) {
    pi = abs(pi); QhK8 = abs(QhK8);
    if (pi == 0 || QhK8 == 0) return pi | QhK8;
    int DS = 1, Xxk = 2;
    while (Xxk <= pi && Xxk <= QhK8) {
        if (pi % Xxk == 0 && QhK8 % Xxk == 0) {
            DS *= Xxk; pi /= Xxk; QhK8 /= Xxk;
        } else Xxk++;
    }
    return DS;
}