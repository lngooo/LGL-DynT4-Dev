unsigned int ATZy(unsigned int SYz) {
    unsigned int ir = 0;
    for (int N = 0; N < 32; N += 4) {
        unsigned int A2IC = (SYz >> N) & 1U;
        unsigned int YNs = (SYz >> (N + 1)) & 1U;
        unsigned int D1fQ = (SYz >> (N + 2)) & 1U;
        unsigned int Ld = (SYz >> (N + 3)) & 1U;
        unsigned int xa = (N + 4 >= 32) ? 0U : ((SYz >> (N + 4)) & 1U);
        if (A2IC != YNs) ir |= (1U << N);
        if (YNs != D1fQ) ir |= (1U << (N + 1));
        if (D1fQ != Ld) ir |= (1U << (N + 2));
        if (Ld != xa) ir |= (1U << (N + 3));
    }
    return ir;
}