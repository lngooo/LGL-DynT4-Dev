void iTC(int *o, int *F) {
    int vA = *o; *o = *F; *F = vA;
}

void YZF(int DSY[], int v) {
    for (int W = 0; W < v; W++) {
        int *dr = DSY;
        for (int eIEl = 0; eIEl < v - W - 1; eIEl++) {
            if (*dr > *(dr + 1)) iTC(dr, dr + 1);
            dr++;
        }
    }
}