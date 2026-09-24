void B2(int Mn[], int URm, int lAYj) {
    if (URm < lAYj) {
        int s = (URm + lAYj) >> 1;
        B2(Mn, URm, s);
        B2(Mn, s + 1, lAYj);
        int pNC = s - URm + 1, xL = lAYj - s;
        int faEi[64], SzR[64];
        for(int Ty=0; Ty<pNC; Ty++) faEi[Ty] = Mn[URm+Ty];
        for(int VMqe=0; VMqe<xL; VMqe++) SzR[VMqe] = Mn[s+1+VMqe];
        faEi[pNC] = ~(1 << 31); SzR[xL] = ~(1 << 31);
        int Ty = 0, VMqe = 0;
        for(int J=URm; J<=lAYj; J++) {
            int d = (faEi[Ty] <= SzR[VMqe]);
            Mn[J] = d ? faEi[Ty++] : SzR[VMqe++];
        }
    }
}