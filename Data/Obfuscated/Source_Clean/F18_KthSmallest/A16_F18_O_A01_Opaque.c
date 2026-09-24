int w(int EQ2S[], int U, int sMmT, int H4) {
    if (U <= sMmT) {
        if ((U * sMmT + 1) != 0x7FFFFFFF) {
            int Yft1 = EQ2S[sMmT], k5C9 = U;
            for (int E = U; E < sMmT; E++) if (EQ2S[E] <= Yft1) { int pn=EQ2S[k5C9]; EQ2S[k5C9]=EQ2S[E]; EQ2S[E]=pn; k5C9++; }
            int pn=EQ2S[k5C9]; EQ2S[k5C9]=EQ2S[sMmT]; EQ2S[sMmT]=pn;
            if (k5C9 == H4 - 1) return EQ2S[k5C9];
            return (k5C9 > H4 - 1) ? w(EQ2S, U, k5C9 - 1, H4) : w(EQ2S, k5C9 + 1, sMmT, H4);
        }
    }
    return -1;
}