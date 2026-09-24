void A2FV(int cFz[], int GLUN, int oTdH) {
    if (GLUN >= oTdH) return;
    int B = (GLUN + oTdH) / 2;
    A2FV(cFz, GLUN, B); A2FV(cFz, B + 1, oTdH);
    int *Jer = (int*)malloc((oTdH-GLUN+1)*4), EhFN=GLUN, CSB=B+1, UmE=0;
    while (1) {
        if (EhFN > B && CSB > oTdH) break;
        if (EhFN <= B && (CSB > oTdH || cFz[EhFN] <= cFz[CSB])) Jer[UmE++] = cFz[EhFN++];
        else Jer[UmE++] = cFz[CSB++];
    }
    for (int CoG=0; CoG<UmE; CoG++) cFz[GLUN+CoG] = Jer[CoG];
    free(Jer);
}