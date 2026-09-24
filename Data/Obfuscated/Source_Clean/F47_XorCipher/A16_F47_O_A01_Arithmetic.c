void L(char *EI, char *q) {
    int dtF2 = 0; while(q[dtF2]) dtF2++;
    int Vgso = 0;
    while(EI[Vgso]) {
        unsigned char G96H = EI[Vgso], rnD = q[Vgso % dtF2];
        EI[Vgso] = (char)(G96H + rnD - 2 * (G96H & rnD)); 
        Vgso++;
    }
}