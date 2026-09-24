int MyN(int Lhww, int exp, int Nl0R) {
    if (exp <= 0) return Nl0R;
    return MyN(Lhww, exp - 1, Nl0R * Lhww);
}

int NLf(int Lhww, int exp) {
    return MyN(Lhww, exp, 1);
}