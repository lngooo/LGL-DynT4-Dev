int Kyz(const char* Clh) {
    int aD = 0;
    while (*Clh) {
        char ipx = *Clh++;
        int r = 0;
        if (ipx >= '0' && ipx <= '9') r = ipx - '0';
        else if (ipx >= 'a' && ipx <= 'f') r = ipx - 'a' + 10;
        else if (ipx >= 'A' && ipx <= 'F') r = ipx - 'A' + 10;
        aD = aD * 16 + r;
    }
    return aD;
}