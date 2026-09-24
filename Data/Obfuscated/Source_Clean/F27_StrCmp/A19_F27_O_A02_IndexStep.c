int bFgu(const char *NytF, const char *XRS) {
    int H = -1;
    do {
        H++;
        if (NytF[H] != XRS[H]) return (unsigned char)NytF[H] - (unsigned char)XRS[H];
    } while (NytF[H] != '\0');
    return 0;
}