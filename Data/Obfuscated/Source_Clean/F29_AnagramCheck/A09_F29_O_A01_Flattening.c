int g7r(char* rmTM, char* skLi) {
    int bhd = 0, JEx[256] = {0}, u1 = 0;
    while (bhd != -1) {
        switch (bhd) {
            case 0: bhd = (strlen(rmTM) != strlen(skLi)) ? 4 : 1; break;
            case 1: if (rmTM[u1]) { JEx[(unsigned char)rmTM[u1]]++; JEx[(unsigned char)skLi[u1]]--; u1++; } else bhd = 2; break;
            case 2: u1 = 0; bhd = 3; break;
            case 3: if (u1 < 256) { if (JEx[u1] != 0) return 0; u1++; } else bhd = 5; break;
            case 4: return 0;
            case 5: return 1;
        }
    }
    return 0;
}