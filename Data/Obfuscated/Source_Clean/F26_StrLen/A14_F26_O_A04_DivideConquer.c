int PA(const char *Lmp1) {
    if (!*Lmp1) return 0;
    if (!*(Lmp1+1)) return 1;

    return 1 + PA(Lmp1 + 1);
}