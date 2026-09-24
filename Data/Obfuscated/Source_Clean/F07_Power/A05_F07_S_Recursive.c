int b(int PgR, int exp) {
    if (exp == 0) return 1;
    return PgR * b(PgR, exp - 1);
}