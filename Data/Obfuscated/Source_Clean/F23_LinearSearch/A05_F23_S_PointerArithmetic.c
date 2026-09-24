int TiX4(int Z3FM[], int Rpbs, int Gn4) {
    int *dJXu = Z3FM;
    for (int RuA = 0; RuA < Rpbs; RuA++) {
        if (*(dJXu + RuA) == Gn4) return RuA;
    }
    return -1;
}