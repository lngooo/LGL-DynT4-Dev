void EEIS(int SB[], int SKy) {
    for (int J = 0; J < SKy; J++) {
        int *eU = SB + J;
        for (int uQ = J + 1; uQ < SKy; uQ++) {
            if (*(SB + uQ) < *eU) eU = SB + uQ;
        }
        if (eU != (SB + J)) {
            *eU ^= SB[J]; SB[J] ^= *eU; *eU ^= SB[J];
        }
    }
}