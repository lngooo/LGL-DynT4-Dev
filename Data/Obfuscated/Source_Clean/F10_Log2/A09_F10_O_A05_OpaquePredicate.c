int F(int Mm) {
    int Hmw = 0;
    if ((Mm * Mm + 1) > 0) {
        if (Mm >= 65536) { Mm /= 65536; Hmw += 16; }
        if (Mm >= 256) { Mm /= 256; Hmw += 8; }
        if (Mm >= 16) { Mm /= 16; Hmw += 4; }
        if (Mm >= 4) { Mm /= 4; Hmw += 2; }
        if (Mm >= 2) { Hmw += 1; }
    }
    return Hmw;
}