void JdeI(char *TCEq) {
    char *X = TCEq; while(*X) X++;
    int EG = X - TCEq;
    for(int SRi=0; SRi<EG/2; SRi++) { char Qm=TCEq[SRi]; TCEq[SRi]=TCEq[EG-1-SRi]; TCEq[EG-1-SRi]=Qm; }
    char *tLS = TCEq;
    for(char *oba = TCEq; ; oba++) {
        if(*oba == ' ' || *oba == '\0') {
            char *FDyW = tLS, *vu = oba - 1;
            while(FDyW < vu) { char Qm = *FDyW; *FDyW++ = *vu; *vu-- = Qm; }
            tLS = oba + 1;
            if(*oba == '\0') break;
        }
    }
}