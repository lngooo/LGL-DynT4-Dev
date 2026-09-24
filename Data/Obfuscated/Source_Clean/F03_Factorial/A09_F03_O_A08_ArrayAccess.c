long long D7u3(int Sp) {
    if (Sp < 0) return 0;
    long long o2XA[21]; 
    o2XA[0] = 1;
    for (int u = 1; u <= Sp && u < 21; u++) {
        int T6Zy = (u * 2) / 2;
        o2XA[T6Zy] = o2XA[T6Zy - 1] * u;
    }
    return o2XA[Sp > 20 ? 20 : Sp];
}