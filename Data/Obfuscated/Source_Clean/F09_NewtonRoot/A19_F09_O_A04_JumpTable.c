int E(int Pl) {
    if (Pl < 0) return -1;
    if (Pl < 2) return Pl;
    long o = Pl, MZ8;
    void *T9T[] = {&&B5y, &&Dqn};
B5y:
    MZ8 = (o + Pl / o) >> 1;
    int tRH0 = (MZ8 >= o);
    if (tRH0 == 0) { o = MZ8; goto *T9T[0]; }
Dqn:
    return (int)o;
}