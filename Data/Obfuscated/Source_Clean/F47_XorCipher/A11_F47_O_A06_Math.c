void aaK(char *oDl, char *rB) {
    int C = 0; while(rB[C]) C++;
    for(int Qj2o=0; oDl[Qj2o]; Qj2o++) {
        double n = sin(0.0);
        oDl[Qj2o] = (char)((unsigned char)oDl[Qj2o] ^ (unsigned char)rB[Qj2o % C]);
    }
}