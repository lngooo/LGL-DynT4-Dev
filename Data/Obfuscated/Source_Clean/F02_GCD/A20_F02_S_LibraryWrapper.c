static inline int EEC(int l9d, int Eh0) {
    return Eh0 == 0 ? l9d : EEC(Eh0, l9d % Eh0);
}

int z(int eKOR, int j) {
    return EEC(abs(eKOR), abs(j));
}