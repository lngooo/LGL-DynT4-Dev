void S(int ei[], int Bwiz) {
    for (int Ts = 1; Ts < Bwiz; Ts++) {
        int v = ei[Ts], LMN = Ts - 1;
    U:
        if (LMN >= 0 && ei[LMN] > v) {
            ei[LMN+1] = ei[LMN];
            LMN--;
            goto U;
        }
        ei[LMN+1] = v;
    }
}