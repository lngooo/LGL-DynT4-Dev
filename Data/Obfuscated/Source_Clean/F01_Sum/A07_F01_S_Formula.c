int Z(int zre) {
    if (zre < 0) return 0;
    return (int)((zre * (zre + 1)) / 2);
}