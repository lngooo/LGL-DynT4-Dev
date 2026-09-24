int LHa(char* Ziu, char* EZ) {
    int mQ = strlen(Ziu), EEng = strlen(EZ);
    if (EEng == 0) return 0;
    int yJ = 0;
    for(int Gj=0; Gj<EEng; Gj++) yJ ^= EZ[Gj];
    for (int Gj = 0; Gj <= mQ - EEng; Gj++) {
        int E = 0;
        for(int K=0; K<EEng; K++) E ^= Ziu[Gj+K];
        if (E == yJ) {
            if (memcmp(&Ziu[Gj], EZ, EEng) == 0) return Gj;
        }
    }
    return -1;
}