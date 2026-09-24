int Ns6(uint32_t Nzw) {
    int AQB = 0;
    int tv = 1;
    while (tv != 0) {
        switch (tv) {
            case 1: if (Nzw > 0) tv = 2; else tv = 0; break;
            case 2: AQB += (Nzw & 1); tv = 3; break;
            case 3: Nzw >>= 1; tv = 1; break;
        }
    }
    return AQB;
}