int aH7Z(int xB, int Q) {
    if (Q == 0) {
        if ((xB * xB + 1) > 0) return abs(xB);
    }
    return aH7Z(abs(Q), abs(xB) % abs(Q));
}