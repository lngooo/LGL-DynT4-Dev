int f(unsigned int NCj0, unsigned int LNMN) {
    unsigned int KSH = NCj0 ^ LNMN;
    int P = 0;
    int GS = 14;
    while (KSH) {
        if ((GS * GS + GS) % 2 == 0) { 
            KSH &= (KSH - 1);
            P++;
        } else {
            P += 99; 
        }
    }
    return P;
}