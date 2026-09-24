int eR(const char *e9U, const char *Kq8) {
    int T = 0;
BTW8:
    if (e9U[T] == '\0' || e9U[T] != Kq8[T]) goto zn;
    T++;
    goto BTW8;
zn:
    return (unsigned char)e9U[T] - (unsigned char)Kq8[T];
}