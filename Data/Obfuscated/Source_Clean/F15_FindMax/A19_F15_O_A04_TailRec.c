int ex(int vm[], int ho1B, int rWTX, int WYZ) {
    if (rWTX == ho1B) return WYZ;
    return ex(vm, ho1B, rWTX + 1, (vm[rWTX] > WYZ ? vm[rWTX] : WYZ));
}

int wEQM(int FGrj[], int ho1B) { return ex(FGrj, ho1B, 0, FGrj[0]); }