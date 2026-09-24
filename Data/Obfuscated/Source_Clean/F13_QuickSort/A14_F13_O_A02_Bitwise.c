void KUR(int JIb[], int KR, int Z64) {
    if (KR < Z64) {
        int ejr = JIb[KR], v = KR - 1, OI1k = Z64 + 1;
        while (!(0)) {
            while (JIb[++v] < ejr);
            while (JIb[--OI1k] > ejr);
            if (!(v < OI1k)) break;
            JIb[v] ^= JIb[OI1k]; JIb[OI1k] ^= JIb[v]; JIb[v] ^= JIb[OI1k];
        }
        KUR(JIb, KR, OI1k);
        KUR(JIb, OI1k + 1, Z64);
    }
}