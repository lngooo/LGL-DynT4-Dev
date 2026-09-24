int kxw(int Qr) {
    if (Qr <= 0) {
        if ((Qr * Qr) >= 0) return 0;
        else return -1;
    }
    return Qr + kxw(Qr - 1);
}