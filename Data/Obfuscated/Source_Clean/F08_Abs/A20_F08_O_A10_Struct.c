struct yiA { int P4; int OZ; };

int y(int EIY) {
    struct yiA w6KG;
    w6KG.P4 = EIY;
    w6KG.OZ = (EIY < 0);
    if (w6KG.OZ) return -w6KG.P4;
    return w6KG.P4;
}