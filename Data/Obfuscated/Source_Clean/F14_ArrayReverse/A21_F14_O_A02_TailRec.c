void r(int h2[], int DAkW, int o4s) {
    while(DAkW < o4s) {
        int YY = h2[DAkW]; h2[DAkW] = h2[o4s]; h2[o4s] = YY;
        DAkW++; o4s--;
    }
}

void KJ(int fA[], int nLE1) {
    if(nLE1 > 1) r(fA, 0, nLE1 - 1);
}