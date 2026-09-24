struct e { int Rbly; int jtN; int W; };

int Q(int YDms[], int FGqI) {
    struct e Z3I = {YDms[0], 0, YDms[0]};
    for(int B=1; B<FGqI; B++) {
        Z3I.jtN = YDms[B];
        Z3I.W = (Z3I.jtN > Z3I.W) ? Z3I.jtN : Z3I.W;
    }
    return Z3I.W;
}