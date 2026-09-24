int Uw(const char *Dr, const char *D) {
    int FLBe = 1, bJ = 0;
    while (FLBe != 0) {
        switch(FLBe) {
            case 1: if(*Dr && (*Dr == *D)) FLBe = 2; else FLBe = 3; break;
            case 2: Dr++; D++; FLBe = 1; break;
            case 3: bJ = *(unsigned char *)Dr - *(unsigned char *)D; FLBe = 0; break;
        }
    }
    return bJ;
}