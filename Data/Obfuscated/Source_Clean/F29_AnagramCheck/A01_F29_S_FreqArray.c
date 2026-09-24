int UdN(char* fRW5, char* aVRf) {
    if (strlen(fRW5) != strlen(aVRf)) return 0;
    int LX6[256] = {0};
    for (int SRM = 0; fRW5[SRM] != '\0'; SRM++) {
        LX6[(unsigned char)fRW5[SRM]]++;
        LX6[(unsigned char)aVRf[SRM]]--;
    }
    for (int SRM = 0; SRM < 256; SRM++) {
        if (LX6[SRM] != 0) return 0;
    }
    return 1;
}