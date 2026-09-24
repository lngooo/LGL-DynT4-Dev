void Gf(char* v4dA) {
    int zma = 0, w = 0;
    while (v4dA[zma + w]) {
        int CD = zma + w;
        int wz5L = (CD == 0 || v4dA[CD - 1] == ' ');
        if (wz5L) {
            if (v4dA[CD] >= 97) v4dA[CD] -= 32;
        } else {
            if (v4dA[CD] >= 65 && v4dA[CD] <= 90) v4dA[CD] += 32;
        }
        zma++;
    }
}