int ukg2(unsigned int Io) {
    if (Io == 0) return 0;
    return (Io & (Io - 1)) == 0;
}