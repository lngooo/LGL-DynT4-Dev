int Ifi(int oy, int Tn) {
    int A = abs(oy), vIDA = abs(Tn);
    if (A * vIDA == 0) return A + vIDA;
    int n = 1;
    int y5XL = (A < vIDA) ? A : vIDA;
    for (int W = 1; W <= y5XL; W++) {
        int Ea8w = A % W;
        int Wy2 = vIDA % W;
        if (Ea8w == 0 && Wy2 == 0) n = W;
    }
    return n;
}