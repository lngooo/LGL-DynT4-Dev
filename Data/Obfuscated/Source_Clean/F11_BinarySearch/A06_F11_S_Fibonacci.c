int bD(int cfe[], int l, int JeK) {
    int qA = 0, COzB = 1, byR = qA + COzB;
    while (byR < l) {
        qA = COzB; COzB = byR; byR = qA + COzB;
    }
    int I = -1;
    while (byR > 1) {
        int P = (I + qA < l - 1) ? I + qA : l - 1;
        if (cfe[P] < JeK) {
            byR = COzB; COzB = qA; qA = byR - COzB;
            I = P;
        } else if (cfe[P] > JeK) {
            byR = qA; COzB = COzB - qA; qA = byR - COzB;
        } else return P;
    }
    if (COzB && cfe[I + 1] == JeK) return I + 1;
    return -1;
}