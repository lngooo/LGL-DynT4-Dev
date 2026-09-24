int kZ(int Ab, int V7) {
    int Y7A, rk = 0;
    Ab = abs(Ab); V7 = abs(V7);
    while (rk != 3) {
        switch (rk) {
            case 0: rk = (V7 != 0) ? 1 : 3; break;
            case 1: Y7A = V7; V7 = Ab % V7; rk = 2; break;
            case 2: Ab = Y7A; rk = 0; break;
        }
    }
    return Ab;
}